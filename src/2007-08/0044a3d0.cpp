// from server: 50% by colin
// roc 2007-08 0044a3d0  unit: seg_00440000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a3d0
//
// 0044a3d0  e84bf5fbff           call 0x409920
// 0044a3d5  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 0044a3db  83e801               sub eax, 1
// 0044a3de  7417                 je 0x44a3f7
// 0044a3e0  83e801               sub eax, 1
// 0044a3e3  752d                 jne 0x44a412
// 0044a3e5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044a3e9  8b01                 mov eax, dword ptr [ecx]
// 0044a3eb  8b10                 mov edx, dword ptr [eax]
// 0044a3ed  c744240401000000     mov dword ptr [esp + 4], 1
// 0044a3f5  ffe2                 jmp edx
// 0044a3f7  e8f4e1fbff           call 0x4085f0
// 0044a3fc  84c0                 test al, al
// 0044a3fe  7412                 je 0x44a412
// 0044a400  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044a404  8b01                 mov eax, dword ptr [ecx]
// 0044a406  8b10                 mov edx, dword ptr [eax]
// 0044a408  c744240401000000     mov dword ptr [esp + 4], 1
// 0044a410  ffe2                 jmp edx
// 0044a412  c20400               ret 4

extern "C" int __cdecl sub_409920();
extern "C" char __cdecl sub_4085F0();

struct CRobloxModule {
    void Method(int);
};

void CRobloxModule::Method(int arg) {
    int state = *(int*)(sub_409920() + 0xec);
    state -= 1;
    if (state != 0) {
        if (sub_4085F0()) {
            int* p = (int*)arg;
            int* vtable = (int*)*p;
            int (*fn)(int) = (int (*)(int))vtable[0];
            fn(1);
        }
    } else {
        state -= 1;
        if (state == 0) {
            int* p = (int*)arg;
            int* vtable = (int*)*p;
            int (*fn)(int) = (int (*)(int))vtable[0];
            fn(1);
        }
    }
}
