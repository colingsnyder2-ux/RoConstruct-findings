// from server: 79% by colin
// roc 2007-08 00555d50  unit: RBX::PercentPanel  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00555d50
//
// 00555d50  56                   push esi
// 00555d51  8bb1c0000000         mov esi, dword ptr [ecx + 0xc0]
// 00555d57  8b4e04               mov ecx, dword ptr [esi + 4]
// 00555d5a  85c9                 test ecx, ecx
// 00555d5c  57                   push edi
// 00555d5d  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00555d61  740c                 je 0x555d6f
// 00555d63  8b4608               mov eax, dword ptr [esi + 8]
// 00555d66  2bc1                 sub eax, ecx
// 00555d68  c1f803               sar eax, 3
// 00555d6b  3bf8                 cmp edi, eax
// 00555d6d  7206                 jb 0x555d75
// 00555d6f  ff15d8e67700         call dword ptr [0x77e6d8]
// 00555d75  8b4604               mov eax, dword ptr [esi + 4]
// 00555d78  8b04f8               mov eax, dword ptr [eax + edi*8]
// 00555d7b  6a00                 push 0
// 00555d7d  68301f8800           push 0x881f30
// 00555d82  684c1f8800           push 0x881f4c
// 00555d87  6a00                 push 0
// 00555d89  50                   push eax
// 00555d8a  e8a7af0d00           call 0x630d36
// 00555d8f  83c414               add esp, 0x14
// 00555d92  5f                   pop edi
// 00555d93  5e                   pop esi
// 00555d94  c20400               ret 4

struct PercentPanel {
    char pad[0xc0];
    void* field_0xc0;
    void func_00555d50(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __cdecl func_00630d36(int, int, int, int, int);

void PercentPanel::func_00555d50(int index)
{
    int* vec = (int*)field_0xc0;
    int* begin = (int*)vec[1];
    if (begin == 0 || (unsigned int)index >= (unsigned int)(((int*)vec[2] - begin) >> 3))
    {
        _invalid_parameter_noinfo();
    }
    int value = ((int*)vec[1])[index * 2];
    func_00630d36(value, 0, 0x881f4c, 0x881f30, 0);
}
