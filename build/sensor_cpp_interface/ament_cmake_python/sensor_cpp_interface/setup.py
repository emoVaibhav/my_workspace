from setuptools import find_packages
from setuptools import setup

setup(
    name='sensor_cpp_interface',
    version='0.0.0',
    packages=find_packages(
        include=('sensor_cpp_interface', 'sensor_cpp_interface.*')),
)
