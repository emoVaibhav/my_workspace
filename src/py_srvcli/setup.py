
from setuptools import find_packages, setup

package_name = 'py_srvcli'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='vd',
    maintainer_email='vd@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "client = py_srvcli.client_node:main" ,
            "server = py_srvcli.service_node:main" ,
            "Act_Client = py_srvcli.ActionClient:main" ,
            "Act_Server = py_srvcli.ActionServer:main",
        ],
    },
)