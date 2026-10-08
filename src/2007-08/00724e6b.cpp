// from server: 63% by colin
// roc 2007-08 00724e6b  unit: CXTIconHandle  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724e6b
//
// 00724e6b  8b442404             mov eax, dword ptr [esp + 4]
// 00724e6f  85c0                 test eax, eax
// 00724e71  7507                 jne 0x724e7a
// 00724e73  b857000780           mov eax, 0x80070057
// 00724e78  eb11                 jmp 0x724e8b
// 00724e7a  83382c               cmp dword ptr [eax], 0x2c
// 00724e7d  75f4                 jne 0x724e73
// 00724e7f  83601c00             and dword ptr [eax + 0x1c], 0
// 00724e83  8d4804               lea ecx, [eax + 4]
// 00724e86  e845cacdff           call 0x4018d0
// 00724e8b  c20400               ret 4

struct CXTIconHandle {
    int sub_00724e6b(void* p);
};

extern "C" void __stdcall sub_004018d0();

int CXTIconHandle::sub_00724e6b(void* p)
{
    if (p == 0)
        return 0x80070057;
    if (*(int*)p != 0x2c)
        return 0x80070057;
    *(int*)((char*)p + 0x1c) &= 0;
    sub_004018d0();
    return 0;
}
