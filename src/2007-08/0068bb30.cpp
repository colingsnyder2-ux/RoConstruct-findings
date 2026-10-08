// from server: 88% by colin
// roc 2007-08 0068bb30  unit: CXTPControlTabWorkspace  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068bb30
//
// 0068bb30  8b81f4010000         mov eax, dword ptr [ecx + 0x1f4]
// 0068bb36  85c0                 test eax, eax
// 0068bb38  7424                 je 0x68bb5e
// 0068bb3a  8d9168010000         lea edx, [ecx + 0x168]
// 0068bb40  39507c               cmp dword ptr [eax + 0x7c], edx
// 0068bb43  7519                 jne 0x68bb5e
// 0068bb45  c7407c00000000       mov dword ptr [eax + 0x7c], 0
// 0068bb4c  8b89f4010000         mov ecx, dword ptr [ecx + 0x1f4]
// 0068bb52  6aff                 push -1
// 0068bb54  6a00                 push 0
// 0068bb56  83c168               add ecx, 0x68
// 0068bb59  e8523f0700           call 0x6ffab0
// 0068bb5e  c3                   ret 

struct CXTPControlTabWorkspace {
    char pad[0x168];
    void* field_168;
    char pad2[0x1f4 - 0x16c];
    void* field_1f4;
    void Clear();
};

extern "C" void __stdcall sub_6ffab0(void*, int, int);

void CXTPControlTabWorkspace::Clear()
{
    void* p = field_1f4;
    if (p != 0) {
        if (*(void**)((char*)p + 0x7c) == (void*)((char*)this + 0x168)) {
            *(void**)((char*)p + 0x7c) = 0;
            sub_6ffab0((char*)field_1f4 + 0x68, 0, -1);
        }
    }
}
