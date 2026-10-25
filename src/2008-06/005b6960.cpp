// from server: 100% by king_originala
// roc 2008-06 005b6960  unit: RBX::DropperTool  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6960
//
// 005b6960  51                   push ecx
// 005b6961  8b813c010000         mov eax, dword ptr [ecx + 0x13c]
// 005b6967  85c0                 test eax, eax
// 005b6969  7504                 jne 0x5b696f
// 005b696b  b001                 mov al, 1
// 005b696d  59                   pop ecx
// 005b696e  c3                   ret 
// 005b696f  8d4c2403             lea ecx, [esp + 3]
// 005b6973  51                   push ecx
// 005b6974  50                   push eax
// 005b6975  e862920e00           call 0x69fbdc
// 005b697a  83f824               cmp eax, 0x24
// 005b697d  b001                 mov al, 1
// 005b697f  7404                 je 0x5b6985
// 005b6981  8a442403             mov al, byte ptr [esp + 3]
// 005b6985  59                   pop ecx
// 005b6986  c3                   ret 

extern "C" int __stdcall probe(void *, bool *);

struct S {
    char padding[0x13c];
    void *value;
    bool f();
};

bool S::f()
{
    if (!value)
        return true;

    bool result;
    if (probe(value, &result) == 0x24)
        return true;
    return result;
}
