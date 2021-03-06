# IMPORTANT:
# the IDs given with TRAIN and TEST variables (ff1010bird, warblrb10k, testdata, etc.)
# must correspond to
# - label files (files must be named $LABELPATH/$ID.csv)
# - audio files (files must be $AUDIOPATH/$ID/*.wav)

# path where label files are found
LABELPATH="/home/dans/dev/github/dcase2018_baseline/task3/labels/"
# path where audio files are found (in dataset subfolders)
AUDIOPATH="/home/dans/dev/github/dcase2018_baseline/task3/audio/"
# datasets making up the training set
TRAIN="ff1010bird warblrb10k BirdVox-DCASE-20k"
# datasets making up the testing set (multiple testing sets for dcase2018 task3; in baseline we ignore the fact that they are not one large pool)
TEST="chern_test PolandNFC_test warbrb10k_test"

# where to put work data (must be writable)
WORKPATH="/home/dans/dev/github/dcase2018_baseline/task3/workingfiles/"

# network configuration to use (network_$NETWORK.inc file)
NETWORK=final_submission

# email for notification on finished subtasks (if email address is given)
EMAIL=
