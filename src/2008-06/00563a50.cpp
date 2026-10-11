// from server: 74% by colin
struct ContentProvider {
    float getPriority();
};

extern "C" void __stdcall sub_501AE0(int* p);
extern "C" float __stdcall sub_5631C0(float* p);

float ContentProvider::getPriority() {
    int buf[34];
    sub_501AE0(buf);
    float v = *(float*)buf;
    return sub_5631C0(&v);
}
