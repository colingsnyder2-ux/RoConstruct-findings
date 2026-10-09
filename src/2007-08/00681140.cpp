// from server: 85% by colin
// roc 2007-08 00681140  unit: CXTPDrawHelpers  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00681140
//
// 00681140  83ec10               sub esp, 0x10
// 00681143  56                   push esi
// 00681144  57                   push edi
// 00681145  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00681149  85ff                 test edi, edi
// 0068114b  7504                 jne 0x681151
// 0068114d  33c0                 xor eax, eax
// 0068114f  eb03                 jmp 0x681154
// 00681151  8b4720               mov eax, dword ptr [edi + 0x20]
// 00681154  8d4c2408             lea ecx, [esp + 8]
// 00681158  51                   push ecx
// 00681159  50                   push eax
// 0068115a  ff15d4ed7700         call dword ptr [0x77edd4]
// 00681160  8b742420             mov esi, dword ptr [esp + 0x20]
// 00681164  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00681168  295604               sub dword ptr [esi + 4], edx
// 0068116b  85ff                 test edi, edi
// 0068116d  7403                 je 0x681172
// 0068116f  8b7f20               mov edi, dword ptr [edi + 0x20]
// 00681172  6aec                 push -0x14
// 00681174  57                   push edi
// 00681175  ff1534ec7700         call dword ptr [0x77ec34]
// 0068117b  a900004000           test eax, 0x400000
// 00681180  740e                 je 0x681190
// 00681182  8b442410             mov eax, dword ptr [esp + 0x10]
// 00681186  2b06                 sub eax, dword ptr [esi]
// 00681188  5f                   pop edi
// 00681189  8906                 mov dword ptr [esi], eax
// 0068118b  5e                   pop esi
// 0068118c  83c410               add esp, 0x10
// 0068118f  c3                   ret 
// 00681190  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00681194  290e                 sub dword ptr [esi], ecx
// 00681196  5f                   pop edi
// 00681197  5e                   pop esi
// 00681198  83c410               add esp, 0x10
// 0068119b  c3                   ret 

struct CXTPDrawHelpers
{
    void AdjustWindowRectEx(int* pRect, int a2, int a3);
};

extern "C" int __stdcall GetWindowRect(int hWnd, int* lpRect);
extern "C" int __stdcall GetWindowLongA(int hWnd, int nIndex);

void CXTPDrawHelpers::AdjustWindowRectEx(int* pRect, int a2, int a3)
{
    int rect[4];
    int hWnd;
    int style;

    hWnd = a2;
    if (hWnd == 0)
        hWnd = 0;
    else
        hWnd = *(int*)(hWnd + 0x20);

    GetWindowRect(hWnd, rect);

    pRect[1] -= rect[0];

    if (a2 != 0)
        a2 = *(int*)(a2 + 0x20);

    style = GetWindowLongA(a2, -20);

    if (style & 0x400000)
    {
        pRect[0] -= rect[2];
    }
    else
    {
        pRect[0] -= rect[1];
    }
}
