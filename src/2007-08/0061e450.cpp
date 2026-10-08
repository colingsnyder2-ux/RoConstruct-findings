// from server: 24% by colin
// roc 2007-08 0061e450  unit: RBX::ScoreHud  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061e450
//
// 0061e450  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061e454  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061e458  56                   push esi
// 0061e459  8b742408             mov esi, dword ptr [esp + 8]
// 0061e45d  3bf1                 cmp esi, ecx
// 0061e45f  7430                 je 0x61e491
// 0061e461  57                   push edi
// 0061e462  8b79f4               mov edi, dword ptr [ecx - 0xc]
// 0061e465  8b50f4               mov edx, dword ptr [eax - 0xc]
// 0061e468  83e910               sub ecx, 0x10
// 0061e46b  83e810               sub eax, 0x10
// 0061e46e  3bce                 cmp ecx, esi
// 0061e470  897804               mov dword ptr [eax + 4], edi
// 0061e473  895104               mov dword ptr [ecx + 4], edx
// 0061e476  8b7908               mov edi, dword ptr [ecx + 8]
// 0061e479  8b5008               mov edx, dword ptr [eax + 8]
// 0061e47c  897808               mov dword ptr [eax + 8], edi
// 0061e47f  895108               mov dword ptr [ecx + 8], edx
// 0061e482  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0061e485  8b500c               mov edx, dword ptr [eax + 0xc]
// 0061e488  89780c               mov dword ptr [eax + 0xc], edi
// 0061e48b  89510c               mov dword ptr [ecx + 0xc], edx
// 0061e48e  75d2                 jne 0x61e462
// 0061e490  5f                   pop edi
// 0061e491  5e                   pop esi
// 0061e492  c3                   ret 

struct ScoreHud {
    void swapRange(int* first, int* last);
};

void ScoreHud::swapRange(int* first, int* last)
{
    int* a = first;
    int* b = last;
    if (a == b)
        return;
    do {
        int tmp = a[-3];
        int tmp2 = b[-3];
        a -= 4;
        b -= 4;
        b[1] = tmp;
        a[1] = tmp2;
        int tmp3 = a[2];
        int tmp4 = b[2];
        b[2] = tmp3;
        a[2] = tmp4;
        int tmp5 = a[3];
        int tmp6 = b[3];
        b[3] = tmp5;
        a[3] = tmp6;
    } while (a != first);
}
