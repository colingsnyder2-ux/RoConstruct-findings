// from server: 100% by king_originala
// roc 2008-06 005d3a30  unit: RBX::VPants::?$FactoryProduct  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3a30
//
// 005d3a30  56                   push esi
// 005d3a31  8b742408             mov esi, dword ptr [esp + 8]
// 005d3a35  8bce                 mov ecx, esi
// 005d3a37  e8d4510000           call 0x5d8c10
// 005d3a3c  85c0                 test eax, eax
// 005d3a3e  7407                 je 0x5d3a47
// 005d3a40  8bc8                 mov ecx, eax
// 005d3a42  e859a9fcff           call 0x59e3a0
// 005d3a47  8bce                 mov ecx, esi
// 005d3a49  e8c2520000           call 0x5d8d10
// 005d3a4e  85c0                 test eax, eax
// 005d3a50  7407                 je 0x5d3a59
// 005d3a52  8bc8                 mov ecx, eax
// 005d3a54  e847a9fcff           call 0x59e3a0
// 005d3a59  8bce                 mov ecx, esi
// 005d3a5b  e8b0500000           call 0x5d8b10
// 005d3a60  85c0                 test eax, eax
// 005d3a62  7407                 je 0x5d3a6b
// 005d3a64  8bc8                 mov ecx, eax
// 005d3a66  e835a9fcff           call 0x59e3a0
// 005d3a6b  8bce                 mov ecx, esi
// 005d3a6d  e89e530000           call 0x5d8e10
// 005d3a72  85c0                 test eax, eax
// 005d3a74  7407                 je 0x5d3a7d
// 005d3a76  8bc8                 mov ecx, eax
// 005d3a78  e823a9fcff           call 0x59e3a0
// 005d3a7d  8bce                 mov ecx, esi
// 005d3a7f  e88c540000           call 0x5d8f10
// 005d3a84  5e                   pop esi
// 005d3a85  85c0                 test eax, eax
// 005d3a87  7407                 je 0x5d3a90
// 005d3a89  8bc8                 mov ecx, eax
// 005d3a8b  e810a9fcff           call 0x59e3a0
// 005d3a90  c20400               ret 4

struct Object {
    void release();
};

struct S {
    Object* first();
    Object* second();
    Object* third();
    Object* fourth();
    Object* fifth();
};

void __stdcall f(S* s)
{
    Object* p = s->first();
    if (p)
        p->release();

    p = s->second();
    if (p)
        p->release();

    p = s->third();
    if (p)
        p->release();

    p = s->fourth();
    if (p)
        p->release();

    p = s->fifth();
    if (p)
        p->release();
}
