// from server: 41% by colin
// roc 2007-08 00694a70  unit: CXTPToolTipContext::CRichEditToolTip  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00694a70
//
// 00694a70  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 00694a73  8b5040               mov edx, dword ptr [eax + 0x40]
// 00694a76  53                   push ebx
// 00694a77  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00694a7b  56                   push esi
// 00694a7c  8b7044               mov esi, dword ptr [eax + 0x44]
// 00694a7f  03da                 add ebx, edx
// 00694a81  8b542418             mov edx, dword ptr [esp + 0x18]
// 00694a85  57                   push edi
// 00694a86  8b7848               mov edi, dword ptr [eax + 0x48]
// 00694a89  8b404c               mov eax, dword ptr [eax + 0x4c]
// 00694a8c  03d6                 add edx, esi
// 00694a8e  8b742420             mov esi, dword ptr [esp + 0x20]
// 00694a92  2bf7                 sub esi, edi
// 00694a94  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00694a98  2bf8                 sub edi, eax
// 00694a9a  83c203               add edx, 3
// 00694a9d  8d442418             lea eax, [esp + 0x18]
// 00694aa1  8954241c             mov dword ptr [esp + 0x1c], edx
// 00694aa5  8b542410             mov edx, dword ptr [esp + 0x10]
// 00694aa9  50                   push eax
// 00694aaa  83c303               add ebx, 3
// 00694aad  83ee03               sub esi, 3
// 00694ab0  83ef03               sub edi, 3
// 00694ab3  52                   push edx
// 00694ab4  81c130010000         add ecx, 0x130
// 00694aba  895c2420             mov dword ptr [esp + 0x20], ebx
// 00694abe  89742428             mov dword ptr [esp + 0x28], esi
// 00694ac2  897c242c             mov dword ptr [esp + 0x2c], edi
// 00694ac6  e8e5a50700           call 0x70f0b0
// 00694acb  5f                   pop edi
// 00694acc  5e                   pop esi
// 00694acd  5b                   pop ebx
// 00694ace  c21800               ret 0x18

struct CRichEditToolTip
{
    char pad[0x6c];
    void* field_6c;
    void sub_70f0b0(void* a, void* b);
    void func_694a70(int a, int b, int c, int d, int e, int f);
};

void CRichEditToolTip::func_694a70(int a, int b, int c, int d, int e, int f)
{
    char* p = (char*)field_6c;
    int v1 = *(int*)(p + 0x40);
    int v2 = *(int*)(p + 0x44);
    int v3 = *(int*)(p + 0x48);
    int v4 = *(int*)(p + 0x4c);

    int r1 = a + v1 + 3;
    int r2 = b + v2 + 3;
    int r3 = c - v3 - 3;
    int r4 = d - v4 - 3;

    struct Rect { int x1, y1, x2, y2; };
    Rect rect;
    rect.x1 = r1;
    rect.y1 = r2;
    rect.x2 = r3;
    rect.y2 = r4;

    sub_70f0b0((char*)this + 0x130, &rect);
}
