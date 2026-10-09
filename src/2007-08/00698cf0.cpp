// from server: 63% by colin
// roc 2007-08 00698cf0  unit: CXTPPropertyGridItem  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00698cf0
//
// 00698cf0  83ec08               sub esp, 8
// 00698cf3  56                   push esi
// 00698cf4  57                   push edi
// 00698cf5  6a0a                 push 0xa
// 00698cf7  ff15b8ed7700         call dword ptr [0x77edb8]
// 00698cfd  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00698d01  8bf8                 mov edi, eax
// 00698d03  8d442408             lea eax, [esp + 8]
// 00698d07  83c620               add esi, 0x20
// 00698d0a  50                   push eax
// 00698d0b  8bce                 mov ecx, esi
// 00698d0d  ff15c8dc7700         call dword ptr [0x77dcc8]
// 00698d13  50                   push eax
// 00698d14  8bce                 mov ecx, esi
// 00698d16  ff1598dd7700         call dword ptr [0x77dd98]
// 00698d1c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00698d20  8b5108               mov edx, dword ptr [ecx + 8]
// 00698d23  50                   push eax
// 00698d24  52                   push edx
// 00698d25  ff15b8d07700         call dword ptr [0x77d0b8]
// 00698d2b  8b442408             mov eax, dword ptr [esp + 8]
// 00698d2f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00698d33  8d0c78               lea ecx, [eax + edi*2]
// 00698d36  8b442414             mov eax, dword ptr [esp + 0x14]
// 00698d3a  83c203               add edx, 3
// 00698d3d  5f                   pop edi
// 00698d3e  8908                 mov dword ptr [eax], ecx
// 00698d40  895004               mov dword ptr [eax + 4], edx
// 00698d43  5e                   pop esi
// 00698d44  83c408               add esp, 8
// 00698d47  c20c00               ret 0xc

struct CXTPPropertyGridItem
{
    void GetSize(int *cx, int *cy, int nWidth);
};

extern "C" int __stdcall GetSystemMetrics(int nIndex);
extern "C" int __stdcall GetTextExtentPoint32A(void *hdc, const char *lpString, int cbString, int *lpSize);

void CXTPPropertyGridItem::GetSize(int *cx, int *cy, int nWidth)
{
    int size[2];
    int extra = GetSystemMetrics(10);
    void *hdc = *(void **)((char *)this + 0x20);
    GetTextExtentPoint32A(hdc, *(const char **)((char *)this + 8), nWidth, size);
    *cx = size[0] + extra * 2;
    *cy = size[1] + 3;
}
