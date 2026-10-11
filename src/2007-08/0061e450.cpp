// from server: 69% by colin
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
    void swapRange(int* first, int* last, int* other);
};

void ScoreHud::swapRange(int* first, int* last, int* other)
{
    if (first == last)
        return;
    do {
        int* a = first - 4;
        int* b = other - 4;
        first = a;
        other = b;
        int t0 = a[1];
        int t1 = b[1];
        a[1] = t1;
        b[1] = t0;
        int t2 = a[2];
        int t3 = b[2];
        a[2] = t3;
        b[2] = t2;
        int t4 = a[3];
        int t5 = b[3];
        a[3] = t5;
        b[3] = t4;
    } while (first != last);
}
