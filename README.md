# Arduino-based-Voice-Controlled-Robot-using-Deep-Learning

* Created a voice command dataset and performed data augmentation using padding and additive white noise.
* Performed audio pre-processing and feature extraction using Mel Spectrogram and trained a Deep NN model.
* Implemented a differential drive robot using Arduino to implement decisions based on voice commands

Training Result:
* Epoch 10/10
120/120 [==============================] - 13s 107ms/step - loss: 0.0359 - accuracy: 0.9902 - val_loss: 0.0496 - val_accuracy: 0.9870

* Obtained loss of 0.0359 and 0.0496 on training and validation dataset
* ![Training Loss over Epochs](https://github.com/amey-waghmare/Arduino-based-Voice-Controlled-Robot-using-Deep-Learning/blob/main/training.png?raw=true)
* Prediction by using computer's mic (say the command inside the 3 seconds window)
* The prediction output is a softmax, giving probability of each class, argmax is used to find that class which has high probability
* ![Prediction](https://github.com/amey-waghmare/Arduino-based-Voice-Controlled-Robot-using-Deep-Learning/blob/main/Prediction.png?raw=true)
