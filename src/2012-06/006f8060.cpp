// from server: 56% by atomic.potato
extern "C" void construct_string(void*, const char*);
extern "C" void call_006f7810(void*);

struct TrackCameraCommand {
    int value;
    TrackCameraCommand* f(int);
};

TrackCameraCommand* TrackCameraCommand::f(int arg) {
    char buffer[28];
    construct_string(buffer, "SelectionDown");
    call_006f7810(this);
    value = 0xB9C844;
    return this;
}
