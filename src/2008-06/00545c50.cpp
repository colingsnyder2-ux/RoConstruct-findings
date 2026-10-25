// from server: 100% by king_originala
// roc 2008-06 00545c50  unit: seg_00540000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00545c50
//
// 00545c50  55                   push ebp
// 00545c51  8bec                 mov ebp, esp
// 00545c53  51                   push ecx
// 00545c54  894dfc               mov dword ptr [ebp - 4], ecx
// 00545c57  8b45fc               mov eax, dword ptr [ebp - 4]
// 00545c5a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00545c5d  8908                 mov dword ptr [eax], ecx
// 00545c5f  8b55fc               mov edx, dword ptr [ebp - 4]
// 00545c62  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00545c65  894204               mov dword ptr [edx + 4], eax
// 00545c68  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00545c6b  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00545c6e  895108               mov dword ptr [ecx + 8], edx
// 00545c71  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00545c74  50                   push eax
// 00545c75  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00545c78  83c10c               add ecx, 0xc
// 00545c7b  e820000000           call 0x545ca0
// 00545c80  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00545c83  8a5518               mov dl, byte ptr [ebp + 0x18]
// 00545c86  88511c               mov byte ptr [ecx + 0x1c], dl
// 00545c89  8b45fc               mov eax, dword ptr [ebp - 4]
// 00545c8c  c6401d00             mov byte ptr [eax + 0x1d], 0
// 00545c90  8b45fc               mov eax, dword ptr [ebp - 4]
// 00545c93  8be5                 mov esp, ebp
// 00545c95  5d                   pop ebp
// 00545c96  c21400               ret 0x14

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
