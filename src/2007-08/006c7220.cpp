// from server: 77% by colin
// roc 2007-08 006c7220  unit: CXTPControlEdit  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c7220
//
// 006c7220  33d2                 xor edx, edx
// 006c7222  83ec10               sub esp, 0x10
// 006c7225  3991a0010000         cmp dword ptr [ecx + 0x1a0], edx
// 006c722b  7515                 jne 0x6c7242
// 006c722d  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c7231  8910                 mov dword ptr [eax], edx
// 006c7233  895004               mov dword ptr [eax + 4], edx
// 006c7236  89500c               mov dword ptr [eax + 0xc], edx
// 006c7239  895008               mov dword ptr [eax + 8], edx
// 006c723c  83c410               add esp, 0x10
// 006c723f  c20400               ret 4
// 006c7242  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 006c7248  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 006c724e  56                   push esi
// 006c724f  8bb1c4000000         mov esi, dword ptr [ecx + 0xc4]
// 006c7255  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 006c725b  57                   push edi
// 006c725c  8d7aee               lea edi, [edx - 0x12]
// 006c725f  89442408             mov dword ptr [esp + 8], eax
// 006c7263  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c7267  83c601               add esi, 1
// 006c726a  83c2ff               add edx, -1
// 006c726d  8938                 mov dword ptr [eax], edi
// 006c726f  83c1ff               add ecx, -1
// 006c7272  5f                   pop edi
// 006c7273  897004               mov dword ptr [eax + 4], esi
// 006c7276  89480c               mov dword ptr [eax + 0xc], ecx
// 006c7279  5e                   pop esi
// 006c727a  895008               mov dword ptr [eax + 8], edx
// 006c727d  83c410               add esp, 0x10
// 006c7280  c20400               ret 4

struct CXTPControlEdit {
    char pad[0xc0];
    int field_c0;
    int field_c4;
    int field_c8;
    int field_cc;
    char pad2[0x1a0 - 0xd0];
    int field_1a0;
    void getRect(int* out);
};

void CXTPControlEdit::getRect(int* out) {
    if (field_1a0 == 0) {
        out[0] = 0;
        out[1] = 0;
        out[3] = 0;
        out[2] = 0;
        return;
    }
    int a = field_c0;
    int b = field_c4;
    int c = field_c8;
    int d = field_cc;
    out[0] = c - 0x12;
    out[1] = b + 1;
    out[3] = d - 1;
    out[2] = c - 1;
}
