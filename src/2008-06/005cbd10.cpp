// from server: 24% by colin
struct ControllerService {
    char pad[0x138];
    int field138;
    int field13c;
    int field140;
    int method(int, int*);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __stdcall sub_598fa0(int*, int);
extern "C" void* __stdcall sub_5cb3e0(void*, int, int);
extern "C" void* __stdcall sub_5cb990(void*, int);
extern "C" void* __stdcall sub_5cb9b0(void*, int);

int ControllerService::method(int a, int* out)
{
    int result = 0;
    switch (a - 1) {
    case 0: {
        void* mem = operator_new(0x2c);
        if (mem) {
            result = (int)sub_5cb3e0(mem, (int)this, a);
        } else {
            result = 0;
        }
        break;
    }
    case 1: {
        void* mem = operator_new(0x64);
        if (mem) {
            result = (int)sub_5cb990(mem, a);
        } else {
            result = 0;
        }
        break;
    }
    case 2: {
        void* mem = operator_new(0x64);
        if (mem) {
            result = (int)sub_5cb9b0(mem, a);
        } else {
            result = 0;
        }
        break;
    }
    case 3:
        result = this->field138;
        break;
    case 4:
        result = this->field13c;
        break;
    case 5:
        result = this->field140;
        break;
    default:
        result = this->field140;
        break;
    }
    *out = 0;
    sub_598fa0(out, result);
    return (int)out;
}
