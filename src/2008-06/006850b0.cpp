// from server: 100% by colin
// roc 2008-06 006850b0  unit: Ogre::RbxSubEntity  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006850b0
//
// 006850b0  8b442404             mov eax, dword ptr [esp + 4]
// 006850b4  85c0                 test eax, eax
// 006850b6  750a                 jne 0x6850c2
// 006850b8  8b442408             mov eax, dword ptr [esp + 8]
// 006850bc  894154               mov dword ptr [ecx + 0x54], eax
// 006850bf  c20800               ret 8
// 006850c2  8b542408             mov edx, dword ptr [esp + 8]
// 006850c6  8994812c010000       mov dword ptr [ecx + eax*4 + 0x12c], edx
// 006850cd  c20800               ret 8

struct S_func_006850b0 {
    char pad0[0x54];
    int m_field54;
    char pad1[0x12c - 0x58];
    int m_array[1];
    void f(int a1, int a2);
};

void S_func_006850b0::f(int a1, int a2)
{
    if (a1 == 0) {
        m_field54 = a2;
    } else {
        *(int*)((char*)this + 0x12c + a1 * 4) = a2;
    }
}
