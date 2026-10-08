// from server: 100% by colin
// roc 2007-08 004488c0  unit: CRbxDocTemplate  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004488c0
//
// 004488c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004488c3  8b4824               mov ecx, dword ptr [eax + 0x24]
// 004488c6  8b11                 mov edx, dword ptr [ecx]
// 004488c8  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 004488ce  6a01                 push 1
// 004488d0  6a00                 push 0
// 004488d2  ffd0                 call eax
// 004488d4  8bc8                 mov ecx, eax
// 004488d6  e9c59c0000           jmp 0x4525a0

struct CRbxDocTemplate {
    char pad[0x58];
    void* field_58;
    void method();
};

void sub_4525A0();

void CRbxDocTemplate::method()
{
    void* p = field_58;
    void* q = *(void**)((char*)p + 0x24);
    void** vtbl = *(void***)q;
    void* (__stdcall *fn)(int, int) = (void* (__stdcall *)(int, int))vtbl[0x88 / 4];
    void* r = fn(0, 1);
    ((void (__thiscall*)(void*))sub_4525A0)(r);
}
