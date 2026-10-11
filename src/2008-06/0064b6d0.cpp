// from server: 78% by atomic.potato
// roc 2008-06 0064b6d0  unit: RBX::SleepStage  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064b6d0
//
// 0064b6d0  83ec0c               sub esp, 0xc
// 0064b6d3  56                   push esi
// 0064b6d4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0064b6d8  837e0400             cmp dword ptr [esi + 4], 0
// 0064b6dc  57                   push edi
// 0064b6dd  8bf9                 mov edi, ecx
// 0064b6df  0f84c4000000         je 0x64b7a9
// 0064b6e5  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064b6e8  8b01                 mov eax, dword ptr [ecx]
// 0064b6ea  8b5004               mov edx, dword ptr [eax + 4]
// 0064b6ed  53                   push ebx
// 0064b6ee  ffd2                 call edx
// 0064b6f0  8bd8                 mov ebx, eax
// 0064b6f2  8b07                 mov eax, dword ptr [edi]
// 0064b6f4  8b5004               mov edx, dword ptr [eax + 4]
// 0064b6f7  8bcf                 mov ecx, edi
// 0064b6f9  ffd2                 call edx
// 0064b6fb  3bd8                 cmp ebx, eax
// 0064b6fd  0f8ca5000000         jl 0x64b7a8
// 0064b703  8b4618               mov eax, dword ptr [esi + 0x18]
// 0064b706  8b00                 mov eax, dword ptr [eax]
// 0064b708  85c0                 test eax, eax
// 0064b70a  0f8498000000         je 0x64b7a8
// 0064b710  83f801               cmp eax, 1
// 0064b713  0f848f000000         je 0x64b7a8
// 0064b719  837e0400             cmp dword ptr [esi + 4], 0
// 0064b71d  8974241c             mov dword ptr [esp + 0x1c], esi
// 0064b721  7420                 je 0x64b743
// 0064b723  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064b726  8b11                 mov edx, dword ptr [ecx]
// 0064b728  8b4204               mov eax, dword ptr [edx + 4]
// 0064b72b  ffd0                 call eax
// 0064b72d  8b17                 mov edx, dword ptr [edi]
// 0064b72f  8bd8                 mov ebx, eax
// 0064b731  8b4204               mov eax, dword ptr [edx + 4]
// 0064b734  8bcf                 mov ecx, edi
// 0064b736  ffd0                 call eax
// 0064b738  3bd8                 cmp ebx, eax
// 0064b73a  7c07                 jl 0x64b743
// 0064b73c  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0064b73f  8b19                 mov ebx, dword ptr [ecx]
// 0064b741  eb02                 jmp 0x64b745
// 0064b743  33db                 xor ebx, ebx
// 0064b745  53                   push ebx
// 0064b746  8bcf                 mov ecx, edi
// 0064b748  e803eeffff           call 0x64a550
// 0064b74d  8d54241c             lea edx, [esp + 0x1c]
// 0064b751  52                   push edx
// 0064b752  8bc8                 mov ecx, eax
// 0064b754  81c7e0000000         add edi, 0xe0
// 0064b75a  e801e8f9ff           call 0x5e9f60
// 0064b75f  8d44241c             lea eax, [esp + 0x1c]
// 0064b763  50                   push eax
// 0064b764  8d4c2410             lea ecx, [esp + 0x10]
// 0064b768  51                   push ecx
// 0064b769  8bcf                 mov ecx, edi
// 0064b76b  e8d0d4f9ff           call 0x5e8c40
// 0064b770  83fb04               cmp ebx, 4
// 0064b773  7405                 je 0x64b77a
// 0064b775  83fb05               cmp ebx, 5
// 0064b778  751b                 jne 0x64b795
// 0064b77a  8b5624               mov edx, dword ptr [esi + 0x24]
// 0064b77d  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0064b780  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 0064b786  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0064b789  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0064b78c  85c9                 test ecx, ecx
// 0064b78e  7405                 je 0x64b795
// 0064b790  e8eb86fcff           call 0x613e80
// 0064b795  8b4618               mov eax, dword ptr [esi + 0x18]
// 0064b798  c7400400000000       mov dword ptr [eax + 4], 0
// 0064b79f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0064b7a2  c70101000000         mov dword ptr [ecx], 1
// 0064b7a8  5b                   pop ebx
// 0064b7a9  5f                   pop edi
// 0064b7aa  5e                   pop esi
// 0064b7ab  83c40c               add esp, 0xc
// 0064b7ae  c20400               ret 4

struct Obj {
    void* vtable;
    int field4;
    char pad8[0x10];
    int field18;
    char pad1c[8];
    int field24;
};

struct Stage {
    char pad0[0x10];
    int field10;
};

struct Inner {
    int field0;
    int field4;
};

extern "C" int __stdcall sub_5e9f60(void* self, void* arg);
extern "C" int __stdcall sub_5e8c40(void* self, void* a, void* b);
extern "C" int __stdcall sub_613e80(void* self);
extern "C" int __stdcall sub_64a550(void* self, int a);

struct SleepStage {
    int method(Obj* obj);
};

int SleepStage::method(Obj* obj) {
    if (obj->field4 == 0) {
        return 0;
    }
    int a = ((int (__thiscall*)(void*))((*(void***)obj->field4)[1]))((void*)obj->field4);
    int b = ((int (__thiscall*)(void*))((*(void***)this)[1]))((void*)this);
    if (a < b) {
        return 0;
    }
    Inner* inner = (Inner*)obj->field18;
    if (inner->field0 == 0) {
        return 0;
    }
    if (inner->field0 == 1) {
        return 0;
    }
    int ebx;
    if (obj->field4 != 0) {
        int c = ((int (__thiscall*)(void*))((*(void***)obj->field4)[1]))((void*)obj->field4);
        int d = ((int (__thiscall*)(void*))((*(void***)this)[1]))((void*)this);
        if (c >= d) {
            ebx = ((Inner*)obj->field18)->field0;
        } else {
            ebx = 0;
        }
    } else {
        ebx = 0;
    }
    int r = sub_64a550(this, ebx);
    sub_5e9f60((void*)r, obj);
    char buf[8];
    sub_5e8c40((void*)((char*)this + 0xe0), buf, obj);
    if (ebx == 4 || ebx == 5) {
        int* p = (int*)obj->field24;
        int* q = (int*)p[7];
        int* s = (int*)q[0x28];
        int* t = (int*)s[4];
        int* u = (int*)t[0xb];
        if (u != 0) {
            sub_613e80(u);
        }
    }
    ((Inner*)obj->field18)->field4 = 0;
    ((Inner*)obj->field18)->field0 = 1;
    return 0;
}
