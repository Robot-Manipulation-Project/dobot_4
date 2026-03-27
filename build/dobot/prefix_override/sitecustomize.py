import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yasiru/Documents/dobot/milestone_4/mxen_ws/install/dobot'
