// from server: 65% by colin
// roc 2007-08 0040a880  unit: CBrowserView  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a880
//
// 0040a880  53                   push ebx
// 0040a881  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0040a885  56                   push esi
// 0040a886  57                   push edi
// 0040a887  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0040a88b  53                   push ebx
// 0040a88c  57                   push edi
// 0040a88d  8bf1                 mov esi, ecx
// 0040a88f  e894572200           call 0x630028
// 0040a894  83ffff               cmp edi, -1
// 0040a897  742c                 je 0x40a8c5
// 0040a899  83ff01               cmp edi, 1
// 0040a89c  7416                 je 0x40a8b4
// 0040a89e  83ff02               cmp edi, 2
// 0040a8a1  7533                 jne 0x40a8d6
// 0040a8a3  85db                 test ebx, ebx
// 0040a8a5  0f95c0               setne al
// 0040a8a8  5f                   pop edi
// 0040a8a9  8886b4020000         mov byte ptr [esi + 0x2b4], al
// 0040a8af  5e                   pop esi
// 0040a8b0  5b                   pop ebx
// 0040a8b1  c20800               ret 8
// 0040a8b4  85db                 test ebx, ebx
// 0040a8b6  0f95c1               setne cl
// 0040a8b9  5f                   pop edi
// 0040a8ba  888eb5020000         mov byte ptr [esi + 0x2b5], cl
// 0040a8c0  5e                   pop esi
// 0040a8c1  5b                   pop ebx
// 0040a8c2  c20800               ret 8
// 0040a8c5  8b9628010000         mov edx, dword ptr [esi + 0x128]
// 0040a8cb  6a01                 push 1
// 0040a8cd  6a00                 push 0
// 0040a8cf  52                   push edx
// 0040a8d0  ff15dcec7700         call dword ptr [0x77ecdc]
// 0040a8d6  5f                   pop edi
// 0040a8d7  5e                   pop esi
// 0040a8d8  5b                   pop ebx
// 0040a8d9  c20800               ret 8

extern "C" int __stdcall InvalidateRect(void*, const void*, int);

struct CBrowserView {
    char pad[0x128];
    void* hwnd;
    char pad2[0x2b4 - 0x12c];
    unsigned char field_2b4;
    unsigned char field_2b5;
    void sub_630028(int, int);
    void func(int, int);
};

void CBrowserView::func(int a, int b)
{
    sub_630028(a, b);
    if (a == -1) {
        InvalidateRect(hwnd, 0, 1);
    } else if (a == 1) {
        field_2b5 = (b != 0);
    } else if (a == 2) {
        field_2b4 = (b != 0);
    }
}
