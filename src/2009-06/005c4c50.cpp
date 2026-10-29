// roc 2009-06 005c4c50  unit: seg_005c0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4c50
//
// 005c4c50  55                   push ebp
// 005c4c51  8bec                 mov ebp, esp
// 005c4c53  51                   push ecx
// 005c4c54  894dfc               mov dword ptr [ebp - 4], ecx
// 005c4c57  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c4c5a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c4c5d  8908                 mov dword ptr [eax], ecx
// 005c4c5f  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c4c62  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c4c65  894204               mov dword ptr [edx + 4], eax
// 005c4c68  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c4c6b  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c4c6e  895108               mov dword ptr [ecx + 8], edx
// 005c4c71  8b4514               mov eax, dword ptr [ebp + 0x14]
// 005c4c74  50                   push eax
// 005c4c75  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c4c78  83c10c               add ecx, 0xc
// 005c4c7b  e820000000           call 0x5c4ca0
// 005c4c80  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c4c83  8a5518               mov dl, byte ptr [ebp + 0x18]
// 005c4c86  88511c               mov byte ptr [ecx + 0x1c], dl
// 005c4c89  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c4c8c  c6401d00             mov byte ptr [eax + 0x1d], 0
// 005c4c90  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c4c93  8be5                 mov esp, ebp
// 005c4c95  5d                   pop ebp
// 005c4c96  c21400               ret 0x14
// copied from an identical function in another client (function ??0S@@QAE@HHHABUPart@@_N@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#pragma optimize("", off)

struct Part {
    char data[16];
    Part(const Part& other);
};

struct S {
    int a;
    int b;
    int c;
    Part part;
    bool enabled;
    bool flag;

    S(int x, int y, int z, const Part& p, bool value);
};

S::S(int x, int y, int z, const Part& p, bool value)
    : a(x), b(y), c(z), part(p), enabled(value), flag(false)
{
}