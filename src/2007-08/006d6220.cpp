// from server: 91% by colin
// roc 2007-08 006d6220  unit: CXTPReportGroupRow  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d6220
//
// 006d6220  56                   push esi
// 006d6221  8bf1                 mov esi, ecx
// 006d6223  8d4e70               lea ecx, [esi + 0x70]
// 006d6226  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006d622c  8bce                 mov ecx, esi
// 006d622e  e8fddcffff           call 0x6d3f30
// 006d6233  f644240801           test byte ptr [esp + 8], 1
// 006d6238  742c                 je 0x6d6266
// 006d623a  833d88878c0000       cmp dword ptr [0x8c8788], 0
// 006d6241  740f                 je 0x6d6252
// 006d6243  56                   push esi
// 006d6244  e83707f8ff           call 0x656980
// 006d6249  83c404               add esp, 4
// 006d624c  8bc6                 mov eax, esi
// 006d624e  5e                   pop esi
// 006d624f  c20400               ret 4
// 006d6252  6880878c00           push 0x8c8780
// 006d6257  ff15e8d27700         call dword ptr [0x77d2e8]
// 006d625d  56                   push esi
// 006d625e  e8ff99f5ff           call 0x62fc62
// 006d6263  83c404               add esp, 4
// 006d6266  8bc6                 mov eax, esi
// 006d6268  5e                   pop esi
// 006d6269  c20400               ret 4

struct CXTPReportGroupRow {
    char pad[0x70];
    int field_70;
    void sub_6d3f30();
    void* scalar_deleting_dtor(unsigned int flags);
};

extern "C" void __stdcall sub_77ddbc(int*);
extern "C" void __stdcall sub_77d2e8(void*);
extern "C" void __cdecl sub_656980(void*);
extern "C" void __cdecl sub_62fc62(void*);
extern int g_8c8788;
extern char g_8c8780;

void* CXTPReportGroupRow::scalar_deleting_dtor(unsigned int flags)
{
    sub_77ddbc(&field_70);
    sub_6d3f30();
    if (flags & 1) {
        if (g_8c8788 != 0) {
            sub_656980(this);
            return this;
        }
        sub_77d2e8(&g_8c8780);
        sub_62fc62(this);
    }
    return this;
}
