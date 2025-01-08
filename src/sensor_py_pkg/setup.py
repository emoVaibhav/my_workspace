from setuptools import find_packages, setup

package_name = 'sensor_py_pkg'

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
            "msgpublisher = sensor_py_pkg.msgpub:main" ,
            "msgsubscriber = sensor_py_pkg.msgsub:main" ,
        ],
    },
)
