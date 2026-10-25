// from server: 100% by king_originala
// roc 2008-06 0044a300  unit: CRbxPlayDocTemplate  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a300
//
// 0044a300  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0044a303  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0044a306  8b11                 mov edx, dword ptr [ecx]
// 0044a308  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0044a30e  6a01                 push 1
// 0044a310  6a00                 push 0
// 0044a312  ffd0                 call eax
// 0044a314  8bc8                 mov ecx, eax
// 0044a316  e915b90000           jmp 0x455c30

struct Result {
    void finish();
};

struct CRbxPlayDocTemplate {
    char pad[0x58];
    void* field_58;
    void method();
};

void CRbxPlayDocTemplate::method()
{
    void* q = *(void**)((char*)field_58 + 0x24);
    void** vtable = *(void***)q;
    Result* (__thiscall *fn)(void*, int, int) =
        (Result* (__thiscall *)(void*, int, int))vtable[0x88 / 4];
    fn(q, 0, 1)->finish();
}
