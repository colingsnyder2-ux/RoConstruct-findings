// from server: 100% by king_originala
// roc 2008-06 004a6e20  unit: RBX::VHint::?$FactoryProduct::Creator  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6e20
//
// 004a6e20  53                   push ebx
// 004a6e21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004a6e25  56                   push esi
// 004a6e26  8d44240c             lea eax, [esp + 0xc]
// 004a6e2a  50                   push eax
// 004a6e2b  53                   push ebx
// 004a6e2c  8bf1                 mov esi, ecx
// 004a6e2e  e84df5ffff           call 0x4a6380
// 004a6e33  8a442414             mov al, byte ptr [esp + 0x14]
// 004a6e37  83c408               add esp, 8
// 004a6e3a  84c0                 test al, al
// 004a6e3c  750f                 jne 0x4a6e4d
// 004a6e3e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a6e42  ff15dc238000         call dword ptr [0x8023dc]
// 004a6e48  5e                   pop esi
// 004a6e49  5b                   pop ebx
// 004a6e4a  c20800               ret 8
// 004a6e4d  7930                 jns 0x4a6e7f
// 004a6e4f  57                   push edi
// 004a6e50  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004a6e54  57                   push edi
// 004a6e55  53                   push ebx
// 004a6e56  e8b5f7ffff           call 0x4a6610
// 004a6e5b  0fb6442418           movzx eax, byte ptr [esp + 0x18]
// 004a6e60  83e07f               and eax, 0x7f
// 004a6e63  8d0cc500000000       lea ecx, [eax*8]
// 004a6e6a  83c408               add esp, 8
// 004a6e6d  2bc8                 sub ecx, eax
// 004a6e6f  57                   push edi
// 004a6e70  8d0c8e               lea ecx, [esi + ecx*4]
// 004a6e73  ff150c248000         call dword ptr [0x80240c]
// 004a6e79  5f                   pop edi
// 004a6e7a  5e                   pop esi
// 004a6e7b  5b                   pop ebx
// 004a6e7c  c20800               ret 8
// 004a6e7f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a6e83  0fb6c0               movzx eax, al
// 004a6e86  8d14c500000000       lea edx, [eax*8]
// 004a6e8d  2bd0                 sub edx, eax
// 004a6e8f  8d0496               lea eax, [esi + edx*4]
// 004a6e92  50                   push eax
// 004a6e93  ff150c248000         call dword ptr [0x80240c]
// 004a6e99  5e                   pop esi
// 004a6e9a  5b                   pop ebx
// 004a6e9b  c20800               ret 8

struct Stream;

struct String {
    char storage[28];
};

extern void (__thiscall *stringClear)(String*);
extern String& (__thiscall *stringAssign)(String*, const String&);

extern void __cdecl readTag(Stream*, unsigned char*);
extern void __cdecl readString(Stream*, String*);

struct Creator {
    String strings[128];
    void read(Stream*, String*);
};

void Creator::read(Stream* stream, String* result)
{
    unsigned char tag;
    readTag(stream, &tag);

    if (tag == 0) {
        stringClear(result);
    } else if (tag & 128) {
        readString(stream, result);
        stringAssign(&strings[tag & 127], *result);
    } else {
        stringAssign(result, strings[tag]);
    }
}
