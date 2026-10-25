// from server: 100% by king_originala
// roc 2008-06 00545a10  unit: seg_00540000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00545a10
//
// 00545a10  55                   push ebp
// 00545a11  8bec                 mov ebp, esp
// 00545a13  51                   push ecx
// 00545a14  894dfc               mov dword ptr [ebp - 4], ecx
// 00545a17  8b45fc               mov eax, dword ptr [ebp - 4]
// 00545a1a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00545a1d  8908                 mov dword ptr [eax], ecx
// 00545a1f  8b55fc               mov edx, dword ptr [ebp - 4]
// 00545a22  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00545a25  894204               mov dword ptr [edx + 4], eax
// 00545a28  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00545a2b  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00545a2e  895108               mov dword ptr [ecx + 8], edx
// 00545a31  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00545a34  50                   push eax
// 00545a35  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00545a38  83c10c               add ecx, 0xc
// 00545a3b  e890010000           call 0x545bd0
// 00545a40  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00545a43  8a5518               mov dl, byte ptr [ebp + 0x18]
// 00545a46  885114               mov byte ptr [ecx + 0x14], dl
// 00545a49  8b45fc               mov eax, dword ptr [ebp - 4]
// 00545a4c  c6401500             mov byte ptr [eax + 0x15], 0
// 00545a50  8b45fc               mov eax, dword ptr [ebp - 4]
// 00545a53  8be5                 mov esp, ebp
// 00545a55  5d                   pop ebp
// 00545a56  c21400               ret 0x14

#pragma optimize("", off)

struct Part {
    int data[2];
    Part(int value);
};

struct S {
    int a;
    int b;
    int c;
    Part part;
    unsigned char flag;
    unsigned char zero;

    S(int x, int y, int z, int value, unsigned char enabled);
};

S::S(int x, int y, int z, int value, unsigned char enabled)
    : a(x), b(y), c(z), part(value), flag(enabled), zero(0)
{
}
