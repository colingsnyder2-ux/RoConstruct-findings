// from server: 87% by atomic.potato
// roc 2011-06 00713790  unit: VAuthoringSettings::?$BoundPropGetSet  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00713790
//
// 00713790  8b442404             mov eax, dword ptr [esp + 4]
// 00713794  85c0                 test eax, eax
// 00713796  740a                 je 0x7137a2
// 00713798  8b4908               mov ecx, dword ptr [ecx + 8]
// 0071379b  8a4408e4             mov al, byte ptr [eax + ecx - 0x1c]
// 0071379f  c20400               ret 4
// 007137a2  8b5108               mov edx, dword ptr [ecx + 8]
// 007137a5  33c0                 xor eax, eax
// 007137a7  8a0410               mov al, byte ptr [eax + edx]
// 007137aa  c20400               ret 4

struct S
{
    int unused;
    int unused2;
    int offset;
    unsigned char get(unsigned char* p);
};

unsigned char S::get(unsigned char* p)
{
    if (p)
        return p[offset - 0x1c];
    return ((unsigned char*)0)[offset];
}
