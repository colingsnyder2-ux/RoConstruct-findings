// roc 2009-12 005cd0d0  unit: RBX::VRbxTextureProxy::?$sp_counted_impl_p  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cd0d0
//
// 005cd0d0  8b542404             mov edx, dword ptr [esp + 4]
// 005cd0d4  8b420c               mov eax, dword ptr [edx + 0xc]
// 005cd0d7  56                   push esi
// 005cd0d8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005cd0dc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005cd0df  3bc1                 cmp eax, ecx
// 005cd0e1  7d06                 jge 0x5cd0e9
// 005cd0e3  b001                 mov al, 1
// 005cd0e5  5e                   pop esi
// 005cd0e6  c20800               ret 8
// 005cd0e9  7e06                 jle 0x5cd0f1
// 005cd0eb  32c0                 xor al, al
// 005cd0ed  5e                   pop esi
// 005cd0ee  c20800               ret 8
// 005cd0f1  3bd6                 cmp edx, esi
// 005cd0f3  0f92c0               setb al
// 005cd0f6  5e                   pop esi
// 005cd0f7  c20800               ret 8
// copied from an identical function in another client (function ?compareChunks@@YG_NPAUPartChunk@@0@Z)

// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
struct PartChunk
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;
};

bool __stdcall compareChunks(PartChunk* a, PartChunk* b)
{
    if (a->field_c < b->field_c)
        return true;
    if (a->field_c > b->field_c)
        return false;
    return a < b ? true : false;
}