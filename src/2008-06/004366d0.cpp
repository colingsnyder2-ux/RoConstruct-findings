// from server: 100% by king_originala
// roc 2008-06 004366d0  unit: COutputView  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004366d0
//
// 004366d0  53                   push ebx
// 004366d1  56                   push esi
// 004366d2  8bf1                 mov esi, ecx
// 004366d4  33db                 xor ebx, ebx
// 004366d6  57                   push edi
// 004366d7  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 004366da  7437                 je 0x436713
// 004366dc  83cfff               or edi, 0xffffffff
// 004366df  90                   nop 
// 004366e0  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004366e3  3bc3                 cmp eax, ebx
// 004366e5  7427                 je 0x43670e
// 004366e7  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004366ea  8d4408ff             lea eax, [eax + ecx - 1]
// 004366ee  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004366f1  3bc8                 cmp ecx, eax
// 004366f3  7702                 ja 0x4366f7
// 004366f5  2bc1                 sub eax, ecx
// 004366f7  8b5610               mov edx, dword ptr [esi + 0x10]
// 004366fa  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004366fd  83c104               add ecx, 4
// 00436700  ff1568248000         call dword ptr [0x802468]
// 00436706  017e1c               add dword ptr [esi + 0x1c], edi
// 00436709  7503                 jne 0x43670e
// 0043670b  895e18               mov dword ptr [esi + 0x18], ebx
// 0043670e  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 00436711  75cd                 jne 0x4366e0
// 00436713  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00436716  3bfb                 cmp edi, ebx
// 00436718  7621                 jbe 0x43673b
// 0043671a  8d9b00000000         lea ebx, [ebx]
// 00436720  8b4610               mov eax, dword ptr [esi + 0x10]
// 00436723  4f                   dec edi
// 00436724  391cb8               cmp dword ptr [eax + edi*4], ebx
// 00436727  8d04b8               lea eax, [eax + edi*4]
// 0043672a  740b                 je 0x436737
// 0043672c  8b08                 mov ecx, dword ptr [eax]
// 0043672e  51                   push ecx
// 0043672f  e8469f2600           call 0x6a067a
// 00436734  83c404               add esp, 4
// 00436737  3bfb                 cmp edi, ebx
// 00436739  77e5                 ja 0x436720
// 0043673b  8b4610               mov eax, dword ptr [esi + 0x10]
// 0043673e  3bc3                 cmp eax, ebx
// 00436740  7409                 je 0x43674b
// 00436742  50                   push eax
// 00436743  e8329f2600           call 0x6a067a
// 00436748  83c404               add esp, 4
// 0043674b  5f                   pop edi
// 0043674c  895e10               mov dword ptr [esi + 0x10], ebx
// 0043674f  895e14               mov dword ptr [esi + 0x14], ebx
// 00436752  5e                   pop esi
// 00436753  5b                   pop ebx
// 00436754  c3                   ret 

extern void (__thiscall *destroyString)(void *);
extern void __cdecl release(void *);

struct COutputView {
    unsigned char padding[16];
    char **slots;
    unsigned capacity;
    unsigned first;
    unsigned count;

    void clear();
};

void COutputView::clear()
{
    while (count != 0) {
        if (count != 0) {
            unsigned index = first + count - 1;
            if (capacity <= index)
                index -= capacity;

            destroyString(slots[index] + 4);

            if (--count == 0)
                first = 0;
        }
    }

    unsigned i = capacity;
    while (i > 0) {
        --i;
        if (slots[i] != 0)
            release(slots[i]);
    }

    if (slots != 0)
        release(slots);

    capacity = 0;
    slots = 0;
}
