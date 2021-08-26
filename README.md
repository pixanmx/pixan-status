# Pixan Status Service

### Development
```
sudo docker run \
  -it \
  --name pixan --rm \
  -p 5001:5001 \
  -v /home/ermiry/Documents/ermiry/Projects/pixan-status:/home/pixan \
  -e RUNTIME=development \
  -e PORT=5001 \
  -e CERVER_RECEIVE_BUFFER_SIZE=4096 -e CERVER_TH_THREADS=4 \
  -e CERVER_CONNECTION_QUEUE=4 \
  ermiry/pixan-status:development /bin/bash
```

## Routes

### Main

#### GET /pixan
**Description:** Pixan service top level route \
**Returns:**
  - 200 on success

#### GET /pixan/version
**Access:** Public \
**Description:** Returns pixan service current version \
**Returns:**
  - 200 and version's json on success
