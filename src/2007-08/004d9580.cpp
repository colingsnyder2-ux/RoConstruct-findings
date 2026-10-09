// from server: 48% by colin
// roc 2007-08 004d9580  unit: RBX::View::MegaTextureProxy  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d9580
//
// 004d9580  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d9584  8b542404             mov edx, dword ptr [esp + 4]
// 004d9588  e883ffffff           call 0x4d9510
// 004d958d  85c0                 test eax, eax
// 004d958f  7d05                 jge 0x4d9596
// 004d9591  b001                 mov al, 1
// 004d9593  c20800               ret 8
// 004d9596  7e05                 jle 0x4d959d
// 004d9598  32c0                 xor al, al
// 004d959a  c20800               ret 8
// 004d959d  8b420c               mov eax, dword ptr [edx + 0xc]
// 004d95a0  56                   push esi
// 004d95a1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004d95a4  3bc6                 cmp eax, esi
// 004d95a6  7306                 jae 0x4d95ae
// 004d95a8  b001                 mov al, 1
// 004d95aa  5e                   pop esi
// 004d95ab  c20800               ret 8
// 004d95ae  7606                 jbe 0x4d95b6
// 004d95b0  32c0                 xor al, al
// 004d95b2  5e                   pop esi
// 004d95b3  c20800               ret 8
// 004d95b6  8b4210               mov eax, dword ptr [edx + 0x10]
// 004d95b9  3b4110               cmp eax, dword ptr [ecx + 0x10]
// 004d95bc  5e                   pop esi
// 004d95bd  0f9cc0               setl al
// 004d95c0  c20800               ret 8

struct TextureProxy {
    char pad[0xc];
    unsigned int field_0xc;
    int field_0x10;
};

extern "C" int __stdcall compare_helper(TextureProxy* a, TextureProxy* b);

bool __stdcall compare(TextureProxy* a, TextureProxy* b) {
    int result = compare_helper(a, b);
    if (result >= 0) {
        return true;
    }
    if (result > 0) {
        return false;
    }
    if (a->field_0xc < b->field_0xc) {
        return true;
    }
    if (a->field_0xc > b->field_0xc) {
        return false;
    }
    return a->field_0x10 < b->field_0x10;
}
