from ultralytics import YOLO

# Load the model.
model = YOLO('yolov8n.pt')

results = model.train(
   data='data/gripdata.yaml',
   imgsz=240,
   epochs=2,
   batch=8,
   name='yolov8n_custom')

#success.save('model.onnx')