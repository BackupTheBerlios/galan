Mjik
ObjectStore 0 [
  version = i1
  rootkey = i1
]

Sheet 1 [
  visible = i1
  sheets = a1:o1:
  control_panel = o2
  components = a1:o3:
  name = s6:sheet1:
  panel_control_active = i0
]

ControlPanel 2 [
  sizer_x = i0
  visible = i1
  sizer_y = i0
  sheet = o1
  name = s6:sheet1:
]

Component 3 [
  connectors = a4:o4:o6:o8:o10:
  height = i56
  width = i123
  class_tag = s7:gencomp:
  sheet = o1
  y_coord = i159
  x_coord = i145
  gencomp_generator = o12
]

Connector 4 [
  targets = a0:
  source_ref = o5
  y_coord = i50
  x_coord = i75
]

ConnectorReference 5 [
  is_output = i1
  kind = i1
  queue_number = i1
  component = o3
]

Connector 6 [
  targets = a0:
  source_ref = o7
  y_coord = i50
  x_coord = i45
]

ConnectorReference 7 [
  is_output = i1
  kind = i1
  queue_number = i0
  component = o3
]

Connector 8 [
  targets = a0:
  source_ref = o9
  y_coord = i5
  x_coord = i75
]

ConnectorReference 9 [
  is_output = i0
  kind = i1
  queue_number = i1
  component = o3
]

Connector 10 [
  targets = a0:
  source_ref = o11
  y_coord = i5
  x_coord = i45
]

ConnectorReference 11 [
  is_output = i0
  kind = i1
  queue_number = i0
  component = o3
]

Generator 12 [
  out_signals = a0:
  out_events = a2:a0::a0::
  canvas_x = d10
  canvas_y = d10
  class_name = s13:canvascontrol:
  name = s14:canvascontrol1:
  controls = a3:o13:o14:o15:
]

Control 13 [
  frame_visible = i1
  generator = o12
  page = d0.01
  step = d0.01
  entry_visible = i1
  min = d-10
  y_coord = i104
  desc_index = i2
  x_coord = i13
  control_visible = i1
  panel = o2
  max = d10
]

Control 14 [
  frame_visible = i1
  generator = o12
  page = d0.01
  step = d0.01
  entry_visible = i1
  min = d-10
  y_coord = i0
  desc_index = i1
  x_coord = i0
  control_visible = i1
  panel = o2
  max = d10
]

Control 15 [
  frame_visible = i1
  generator = o12
  page = d0
  step = d0
  entry_visible = i1
  min = d0
  y_coord = i68
  desc_index = i0
  x_coord = i128
  control_visible = i1
  panel = o2
  max = d0
]

