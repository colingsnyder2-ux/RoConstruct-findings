// from server: 45% by colin
// roc 2008-06 00575ba0  unit: RBX::DataModel  size: 484 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575ba0
//
// 00575ba0  83ec30               sub esp, 0x30
// 00575ba3  53                   push ebx
// 00575ba4  56                   push esi
// 00575ba5  57                   push edi
// 00575ba6  8bf1                 mov esi, ecx
// 00575ba8  e853c40700           call 0x5f2000
// 00575bad  dd5c2414             fstp qword ptr [esp + 0x14]
// 00575bb1  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00575bb5  8b03                 mov eax, dword ptr [ebx]
// 00575bb7  83f801               cmp eax, 1
// 00575bba  7c2b                 jl 0x575be7
// 00575bbc  83f807               cmp eax, 7
// 00575bbf  7f26                 jg 0x575be7
// 00575bc1  0fbf4310             movsx eax, word ptr [ebx + 0x10]
// 00575bc5  0fbf4b12             movsx ecx, word ptr [ebx + 0x12]
// 00575bc9  89442440             mov dword ptr [esp + 0x40], eax
// 00575bcd  db442440             fild dword ptr [esp + 0x40]
// 00575bd1  894c2440             mov dword ptr [esp + 0x40], ecx
// 00575bd5  db442440             fild dword ptr [esp + 0x40]
// 00575bd9  d9c9                 fxch st(1)
// 00575bdb  d91d784d9700         fstp dword ptr [0x974d78]
// 00575be1  d91d7c4d9700         fstp dword ptr [0x974d7c]
// 00575be7  85f6                 test esi, esi
// 00575be9  7408                 je 0x575bf3
// 00575beb  8d86f0010000         lea eax, [esi + 0x1f0]
// 00575bf1  eb02                 jmp 0x575bf5
// 00575bf3  33c0                 xor eax, eax
// 00575bf5  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00575bf8  8b13                 mov edx, dword ptr [ebx]
// 00575bfa  894c2428             mov dword ptr [esp + 0x28], ecx
// 00575bfe  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00575c01  89542424             mov dword ptr [esp + 0x24], edx
// 00575c05  8b5308               mov edx, dword ptr [ebx + 8]
// 00575c08  894c2430             mov dword ptr [esp + 0x30], ecx
// 00575c0c  8b8e2c020000         mov ecx, dword ptr [esi + 0x22c]
// 00575c12  8954242c             mov dword ptr [esp + 0x2c], edx
// 00575c16  8b5310               mov edx, dword ptr [ebx + 0x10]
// 00575c19  89542434             mov dword ptr [esp + 0x34], edx
// 00575c1d  89442438             mov dword ptr [esp + 0x38], eax
// 00575c21  85c9                 test ecx, ecx
// 00575c23  7412                 je 0x575c37
// 00575c25  8b01                 mov eax, dword ptr [ecx]
// 00575c27  8b00                 mov eax, dword ptr [eax]
// 00575c29  8d542424             lea edx, [esp + 0x24]
// 00575c2d  52                   push edx
// 00575c2e  8d542410             lea edx, [esp + 0x10]
// 00575c32  52                   push edx
// 00575c33  ffd0                 call eax
// 00575c35  eb14                 jmp 0x575c4b
// 00575c37  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00575c3f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00575c47  8d44240c             lea eax, [esp + 0xc]
// 00575c4b  8b08                 mov ecx, dword ptr [eax]
// 00575c4d  8b7804               mov edi, dword ptr [eax + 4]
// 00575c50  85c9                 test ecx, ecx
// 00575c52  0f8591000000         jne 0x575ce9
// 00575c58  8b8624020000         mov eax, dword ptr [esi + 0x224]
// 00575c5e  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 00575c64  8b12                 mov edx, dword ptr [edx]
// 00575c66  8d8830010000         lea ecx, [eax + 0x130]
// 00575c6c  8d442424             lea eax, [esp + 0x24]
// 00575c70  50                   push eax
// 00575c71  8d442410             lea eax, [esp + 0x10]
// 00575c75  50                   push eax
// 00575c76  ffd2                 call edx
// 00575c78  8b08                 mov ecx, dword ptr [eax]
// 00575c7a  8b7804               mov edi, dword ptr [eax + 4]
// 00575c7d  85c9                 test ecx, ecx
// 00575c7f  7568                 jne 0x575ce9
// 00575c81  8b861c020000         mov eax, dword ptr [esi + 0x21c]
// 00575c87  8d8830010000         lea ecx, [eax + 0x130]
// 00575c8d  8b01                 mov eax, dword ptr [ecx]
// 00575c8f  8b00                 mov eax, dword ptr [eax]
// 00575c91  8d542424             lea edx, [esp + 0x24]
// 00575c95  52                   push edx
// 00575c96  8d542410             lea edx, [esp + 0x10]
// 00575c9a  52                   push edx
// 00575c9b  ffd0                 call eax
// 00575c9d  8b08                 mov ecx, dword ptr [eax]
// 00575c9f  8b7804               mov edi, dword ptr [eax + 4]
// 00575ca2  85c9                 test ecx, ecx
// 00575ca4  7543                 jne 0x575ce9
// 00575ca6  8b86fc010000         mov eax, dword ptr [esi + 0x1fc]
// 00575cac  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 00575cb2  8b12                 mov edx, dword ptr [edx]
// 00575cb4  8d8830010000         lea ecx, [eax + 0x130]
// 00575cba  8d442424             lea eax, [esp + 0x24]
// 00575cbe  50                   push eax
// 00575cbf  8d442410             lea eax, [esp + 0x10]
// 00575cc3  50                   push eax
// 00575cc4  ffd2                 call edx
// 00575cc6  8b08                 mov ecx, dword ptr [eax]
// 00575cc8  8b7804               mov edi, dword ptr [eax + 4]
// 00575ccb  85c9                 test ecx, ecx
// 00575ccd  751a                 jne 0x575ce9
// 00575ccf  8d442424             lea eax, [esp + 0x24]
// 00575cd3  50                   push eax
// 00575cd4  8d4c2410             lea ecx, [esp + 0x10]
// 00575cd8  51                   push ecx
// 00575cd9  8bce                 mov ecx, esi
// 00575cdb  e8b0fbffff           call 0x575890
// 00575ce0  8b08                 mov ecx, dword ptr [eax]
// 00575ce2  8b7804               mov edi, dword ptr [eax + 4]
// 00575ce5  85c9                 test ecx, ecx
// 00575ce7  7422                 je 0x575d0b
// 00575ce9  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 00575cef  85c0                 test eax, eax
// 00575cf1  7407                 je 0x575cfa
// 00575cf3  05e8020000           add eax, 0x2e8
// 00575cf8  eb02                 jmp 0x575cfc
// 00575cfa  33c0                 xor eax, eax
// 00575cfc  39862c020000         cmp dword ptr [esi + 0x22c], eax
// 00575d02  7407                 je 0x575d0b
// 00575d04  b801000000           mov eax, 1
// 00575d09  eb02                 jmp 0x575d0d
// 00575d0b  33c0                 xor eax, eax
// 00575d0d  888630020000         mov byte ptr [esi + 0x230], al
// 00575d13  85c9                 test ecx, ecx
// 00575d15  7529                 jne 0x575d40
// 00575d17  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 00575d1d  8b90e8020000         mov edx, dword ptr [eax + 0x2e8]
// 00575d23  8b12                 mov edx, dword ptr [edx]
// 00575d25  8d88e8020000         lea ecx, [eax + 0x2e8]
// 00575d2b  8d442424             lea eax, [esp + 0x24]
// 00575d2f  50                   push eax
// 00575d30  8d442410             lea eax, [esp + 0x10]
// 00575d34  50                   push eax
// 00575d35  ffd2                 call edx
// 00575d37  8b08                 mov ecx, dword ptr [eax]
// 00575d39  8b7804               mov edi, dword ptr [eax + 4]
// 00575d3c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00575d40  8b03                 mov eax, dword ptr [ebx]
// 00575d42  83f801               cmp eax, 1
// 00575d45  7c05                 jl 0x575d4c
// 00575d47  83f807               cmp eax, 7
// 00575d4a  7e05                 jle 0x575d51
// 00575d4c  83f80a               cmp eax, 0xa
// 00575d4f  7509                 jne 0x575d5a
// 00575d51  56                   push esi
// 00575d52  e8c9c5f1ff           call 0x492320
// 00575d57  83c404               add esp, 4
// 00575d5a  89be2c020000         mov dword ptr [esi + 0x22c], edi
// 00575d60  8bb60c020000         mov esi, dword ptr [esi + 0x20c]
// 00575d66  e895c20700           call 0x5f2000
// 00575d6b  dc642414             fsub qword ptr [esp + 0x14]
// 00575d6f  5f                   pop edi
// 00575d70  dc86e0010000         fadd qword ptr [esi + 0x1e0]
// 00575d76  dd9ee0010000         fstp qword ptr [esi + 0x1e0]
// 00575d7c  5e                   pop esi
// 00575d7d  5b                   pop ebx
// 00575d7e  83c430               add esp, 0x30
// 00575d81  c20400               ret 4

struct RBX_DataModel {
    char pad[0x1f0];
    char field_1f0[0xc];
    void* field_1fc;
    void* field_200;
    void* field_204;
    void* field_208;
    void* field_20c;
    void* field_210;
    void* field_214;
    void* field_218;
    void* field_21c;
    void* field_220;
    void* field_224;
    void* field_228;
    void* field_22c;
    char field_230;
    void update(void* arg);
};

extern "C" double __cdecl sub_5f2000();
extern "C" void __cdecl sub_492320(void* p);
extern "C" void* __cdecl sub_575890(void* a, void* b);

void RBX_DataModel::update(void* arg) {
    double t0 = sub_5f2000();
    int* p = (int*)arg;
    int v = p[0];
    if (v >= 1 && v <= 7) {
        int a = *(short*)((char*)p + 0x10);
        int b = *(short*)((char*)p + 0x12);
        *(float*)0x974d78 = (float)a;
        *(float*)0x974d7c = (float)b;
    }
    void* self = this;
    void* p1f0 = self ? (char*)self + 0x1f0 : 0;
    int s24 = p[1];
    int s28 = p[0];
    int s2c = p[3];
    int s30 = p[2];
    int s34 = p[4];
    int s38 = (int)p1f0;
    void* c22c = *(void**)((char*)self + 0x22c);
    int r0 = 0;
    int r1 = 0;
    if (c22c) {
        void** vt = *(void***)c22c;
        void* fn = vt[0];
        void* out[2];
        void* in[5];
        in[0] = (void*)s24;
        in[1] = (void*)s28;
        in[2] = (void*)s2c;
        in[3] = (void*)s30;
        in[4] = (void*)s34;
        ((void (__thiscall*)(void*, void*, void*))fn)(c22c, out, in);
        r0 = (int)out[0];
        r1 = (int)out[1];
    } else {
        r0 = 0;
        r1 = 0;
    }
    if (r0 != 0) {
        void* o224 = *(void**)((char*)self + 0x224);
        void** vt = *(void***)((char*)o224 + 0x130);
        void* fn = vt[0];
        void* out[2];
        void* in[5];
        in[0] = (void*)s24;
        in[1] = (void*)s28;
        in[2] = (void*)s2c;
        in[3] = (void*)s30;
        in[4] = (void*)s34;
        ((void (__thiscall*)(void*, void*, void*))fn)((char*)o224 + 0x130, out, in);
        r0 = (int)out[0];
        r1 = (int)out[1];
        if (r0 == 0) {
            void* o21c = *(void**)((char*)self + 0x21c);
            void** vt2 = *(void***)((char*)o21c + 0x130);
            void* fn2 = vt2[0];
            void* out2[2];
            void* in2[5];
            in2[0] = (void*)s24;
            in2[1] = (void*)s28;
            in2[2] = (void*)s2c;
            in2[3] = (void*)s30;
            in2[4] = (void*)s34;
            ((void (__thiscall*)(void*, void*, void*))fn2)((char*)o21c + 0x130, out2, in2);
            r0 = (int)out2[0];
            r1 = (int)out2[1];
            if (r0 == 0) {
                void* o1fc = *(void**)((char*)self + 0x1fc);
                void** vt3 = *(void***)((char*)o1fc + 0x130);
                void* fn3 = vt3[0];
                void* out3[2];
                void* in3[5];
                in3[0] = (void*)s24;
                in3[1] = (void*)s28;
                in3[2] = (void*)s2c;
                in3[3] = (void*)s30;
                in3[4] = (void*)s34;
                ((void (__thiscall*)(void*, void*, void*))fn3)((char*)o1fc + 0x130, out3, in3);
                r0 = (int)out3[0];
                r1 = (int)out3[1];
                if (r0 == 0) {
                    void* out4[2];
                    void* in4[5];
                    in4[0] = (void*)s24;
                    in4[1] = (void*)s28;
                    in4[2] = (void*)s2c;
                    in4[3] = (void*)s30;
                    in4[4] = (void*)s34;
                    void* res = sub_575890(self, in4);
                    r0 = ((int*)res)[0];
                    r1 = ((int*)res)[1];
                }
            }
        }
    }
    char flag;
    if (r0 != 0) {
        void* o204 = *(void**)((char*)self + 0x204);
        void* cmp = o204 ? (char*)o204 + 0x2e8 : 0;
        flag = (*(void**)((char*)self + 0x22c) != cmp);
    } else {
        flag = 0;
    }
    *(char*)((char*)self + 0x230) = flag;
    if (r0 == 0) {
        void* o204 = *(void**)((char*)self + 0x204);
        void** vt = *(void***)((char*)o204 + 0x2e8);
        void* fn = vt[0];
        void* out[2];
        void* in[5];
        in[0] = (void*)s24;
        in[1] = (void*)s28;
        in[2] = (void*)s2c;
        in[3] = (void*)s30;
        in[4] = (void*)s34;
        ((void (__thiscall*)(void*, void*, void*))fn)((char*)o204 + 0x2e8, out, in);
        r0 = (int)out[0];
        r1 = (int)out[1];
    }
    int v2 = p[0];
    if ((v2 >= 1 && v2 <= 7) || v2 == 10) {
        sub_492320(self);
    }
    *(void**)((char*)self + 0x22c) = (void*)r1;
    void* o20c = *(void**)((char*)self + 0x20c);
    double t1 = sub_5f2000();
    double dt = t1 - t0;
    *(double*)((char*)o20c + 0x1e0) = *(double*)((char*)o20c + 0x1e0) + dt;
}
