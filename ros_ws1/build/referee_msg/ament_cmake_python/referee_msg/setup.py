from setuptools import find_packages
from setuptools import setup

setup(
    name='referee_msg',
    version='0.0.0',
    packages=find_packages(
        include=('referee_msg', 'referee_msg.*')),
)
