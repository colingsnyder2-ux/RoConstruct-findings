// from server: 79% by tester
// roc 2008-06 00464540  unit: CFont  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464540
//
// 00464540  56                   push esi
// 00464541  8bf1                 mov esi, ecx
// 00464543  e82cc42300           call 0x6a0974
// 00464548  85c0                 test eax, eax
// 0046454a  743a                 je 0x464586
// 0046454c  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 00464552  85c0                 test eax, eax
// 00464554  7515                 jne 0x46456b
// 00464556  6816b78000           push 0x80b716
// 0046455b  8bce                 mov ecx, esi
// 0046455d  e812c42300           call 0x6a0974
// 00464562  8bc8                 mov ecx, eax
// 00464564  e8b1c62300           call 0x6a0c1a
// 00464569  5e                   pop esi
// 0046456a  c3                   ret 
// 0046456b  8d8810010000         lea ecx, [eax + 0x110]
// 00464571  ff1564248000         call dword ptr [0x802464]
// 00464577  50                   push eax
// 00464578  8bce                 mov ecx, esi
// 0046457a  e8f5c32300           call 0x6a0974
// 0046457f  8bc8                 mov ecx, eax
// 00464581  e894c62300           call 0x6a0c1a
// 00464586  5e                   pop esi
// 00464587  c3                   ret 

struct CFont {
    void sub_464540();
    void* sub_6A0974();
};


extern "C" void __stdcall sub_6A0C1A(void*, const char*);
extern "C" const char* __stdcall sub_802464(void*);

void CFont::sub_464540()
{
    void* p = sub_6A0974();
    if (p == 0)
        return;

    int field = *(int*)((char*)this + 0x144);
    if (field == 0)
    {
        sub_6A0C1A(sub_6A0974(), (const char*)0x80B716);
        return;
    }

    const char* s = sub_802464((char*)field + 0x110);
    sub_6A0C1A(sub_6A0974(), s);
}
