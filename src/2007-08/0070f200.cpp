// from server: 84% by colin
// roc 2007-08 0070f200  unit: CXTPRichRender::XTextHost  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f200
//
// 0070f200  83ec10               sub esp, 0x10
// 0070f203  56                   push esi
// 0070f204  8bf1                 mov esi, ecx
// 0070f206  8b46fc               mov eax, dword ptr [esi - 4]
// 0070f209  50                   push eax
// 0070f20a  8d4c2408             lea ecx, [esp + 8]
// 0070f20e  e82b0df2ff           call 0x62ff3e
// 0070f213  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0070f217  8b442408             mov eax, dword ptr [esp + 8]
// 0070f21b  83c664               add esi, 0x64
// 0070f21e  85c0                 test eax, eax
// 0070f220  8931                 mov dword ptr [ecx], esi
// 0070f222  5e                   pop esi
// 0070f223  7406                 je 0x70f22b
// 0070f225  8b1424               mov edx, dword ptr [esp]
// 0070f228  895004               mov dword ptr [eax + 4], edx
// 0070f22b  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0070f230  740c                 je 0x70f23e
// 0070f232  8b442408             mov eax, dword ptr [esp + 8]
// 0070f236  50                   push eax
// 0070f237  6a00                 push 0
// 0070f239  e8fa0cf2ff           call 0x62ff38
// 0070f23e  33c0                 xor eax, eax
// 0070f240  83c410               add esp, 0x10
// 0070f243  c20400               ret 4

struct XTextHost {
    char pad[0x64];
    void* field_64;
    void assign(void** out);
};

extern "C" void __stdcall sub_62ff3e(void* dst, void* src);
extern "C" void __stdcall sub_62ff38(void* p, int v);

void XTextHost::assign(void** out) {
    void* tmp[4];
    sub_62ff3e(tmp, *(void**)((char*)this - 4));
    *out = (char*)this + 0x64;
    if (tmp[0]) {
        *(void**)((char*)tmp[0] + 4) = tmp[1];
    }
    if (tmp[3]) {
        sub_62ff38(tmp[2], 0);
    }
}
