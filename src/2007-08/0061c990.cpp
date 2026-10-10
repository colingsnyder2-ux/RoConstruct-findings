// from server: 44% by colin
struct ChatOutput {
    char pad0[0x2c];
    float field2c;
    char pad30[0x14];
    float field44;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

struct ChatOutputInner {
    char pad0[0x11c];
    int field11c;
    int field120;
    int field124;
    int field128;
    float field12c;
};

struct ChatOutputOuter {
    char pad0[0x100];
    ChatOutputInner inner;
};

void ChatOutput_Process(ChatOutput* self, float dt, int a, int b);

void ChatOutput_Process(ChatOutput* self, float dt, int a, int b)
{
    self->field2c += dt;
    ChatOutputOuter* outer = (ChatOutputOuter*)((char*)self - 0x100);
    ChatOutputInner* in = &outer->inner;
    while (in->field128 == 0) {
        int ebx = in->field124;
        int eax = in->field128;
        int sum = eax + ebx;
        if (ebx > (unsigned)sum) {
            _invalid_parameter_noinfo();
        }
        int ecx = in->field128 + in->field124;
        int edi = ebx;
        int ebp = ebx;
        edi >>= 2;
        ebp &= 3;
        if (ebx < (unsigned)ecx) {
        } else {
            _invalid_parameter_noinfo();
        }
        int eax2 = in->field120;
        if (eax2 > (unsigned)edi) {
        } else {
            edi -= eax2;
        }
        int edx = in->field11c;
        float f = in->field12c;
        int* arr = (int*)edx;
        int* arr2 = (int*)arr[edi];
        float cmp = *(float*)((char*)arr2 + ebp * 4 + 0x44);
        if (!(f <= cmp)) {
            ChatOutput_Process(self, dt, a, b);
        }
    }
}
