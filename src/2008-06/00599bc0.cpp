// from server: 100% by colin
// roc 2008-06 00599bc0  unit: RBX::PartInstance  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599bc0
//
// 00599bc0  53                   push ebx
// 00599bc1  55                   push ebp
// 00599bc2  56                   push esi
// 00599bc3  8bf1                 mov esi, ecx
// 00599bc5  8b4608               mov eax, dword ptr [esi + 8]
// 00599bc8  8b2e                 mov ebp, dword ptr [esi]
// 00599bca  03c0                 add eax, eax
// 00599bcc  57                   push edi
// 00599bcd  03c0                 add eax, eax
// 00599bcf  03c0                 add eax, eax
// 00599bd1  6a10                 push 0x10
// 00599bd3  50                   push eax
// 00599bd4  e8a7e9f6ff           call 0x508580
// 00599bd9  8b4e08               mov ecx, dword ptr [esi + 8]
// 00599bdc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00599be0  83c408               add esp, 8
// 00599be3  3bf9                 cmp edi, ecx
// 00599be5  8906                 mov dword ptr [esi], eax
// 00599be7  7d02                 jge 0x599beb
// 00599be9  8bcf                 mov ecx, edi
// 00599beb  8d34c8               lea esi, [eax + ecx*8]
// 00599bee  8bcd                 mov ecx, ebp
// 00599bf0  3bc6                 cmp eax, esi
// 00599bf2  7328                 jae 0x599c1c
// 00599bf4  85c0                 test eax, eax
// 00599bf6  741a                 je 0x599c12
// 00599bf8  8b11                 mov edx, dword ptr [ecx]
// 00599bfa  8910                 mov dword ptr [eax], edx
// 00599bfc  8b5104               mov edx, dword ptr [ecx + 4]
// 00599bff  895004               mov dword ptr [eax + 4], edx
// 00599c02  85d2                 test edx, edx
// 00599c04  740c                 je 0x599c12
// 00599c06  83c204               add edx, 4
// 00599c09  bb01000000           mov ebx, 1
// 00599c0e  f00fc11a             lock xadd dword ptr [edx], ebx
// 00599c12  83c008               add eax, 8
// 00599c15  83c108               add ecx, 8
// 00599c18  3bc6                 cmp eax, esi
// 00599c1a  72d8                 jb 0x599bf4
// 00599c1c  8d44fd00             lea eax, [ebp + edi*8]
// 00599c20  3be8                 cmp ebp, eax
// 00599c22  7344                 jae 0x599c68
// 00599c24  2bc5                 sub eax, ebp
// 00599c26  48                   dec eax
// 00599c27  c1e803               shr eax, 3
// 00599c2a  40                   inc eax
// 00599c2b  8d7d04               lea edi, [ebp + 4]
// 00599c2e  8bd8                 mov ebx, eax
// 00599c30  8b37                 mov esi, dword ptr [edi]
// 00599c32  85f6                 test esi, esi
// 00599c34  742a                 je 0x599c60
// 00599c36  8d4604               lea eax, [esi + 4]
// 00599c39  83c9ff               or ecx, 0xffffffff
// 00599c3c  f00fc108             lock xadd dword ptr [eax], ecx
// 00599c40  751e                 jne 0x599c60
// 00599c42  8b16                 mov edx, dword ptr [esi]
// 00599c44  8b4204               mov eax, dword ptr [edx + 4]
// 00599c47  8bce                 mov ecx, esi
// 00599c49  ffd0                 call eax
// 00599c4b  8d4e08               lea ecx, [esi + 8]
// 00599c4e  83caff               or edx, 0xffffffff
// 00599c51  f00fc111             lock xadd dword ptr [ecx], edx
// 00599c55  7509                 jne 0x599c60
// 00599c57  8b06                 mov eax, dword ptr [esi]
// 00599c59  8b5008               mov edx, dword ptr [eax + 8]
// 00599c5c  8bce                 mov ecx, esi
// 00599c5e  ffd2                 call edx
// 00599c60  83c708               add edi, 8
// 00599c63  83eb01               sub ebx, 1
// 00599c66  75c8                 jne 0x599c30
// 00599c68  55                   push ebp
// 00599c69  e8b2e0f6ff           call 0x507d20
// 00599c6e  83c404               add esp, 4
// 00599c71  5f                   pop edi
// 00599c72  5e                   pop esi
// 00599c73  5d                   pop ebp
// 00599c74  5b                   pop ebx
// 00599c75  c20400               ret 4

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void* __cdecl alignedAlloc(unsigned int, unsigned int);
extern void __cdecl alignedFree(void*);

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Entry {
    void* object;
    Control* control;
};

struct S {
    Entry* data;
    int reserved;
    int count;
    void resizeStorage(int oldCount);
};

void S::resizeStorage(int oldCount)
{
    Entry* oldData = data;
    Entry* newData = static_cast<Entry*>(alignedAlloc(count * sizeof(Entry), 16));
    int copyCount = count;
    data = newData;
    if (oldCount < copyCount)
        copyCount = oldCount;

    Entry* destinationEnd = newData + copyCount;
    Entry* source = oldData;
    for (; newData < destinationEnd; ++newData, ++source) {
        if (newData) {
            newData->object = source->object;
            newData->control = source->control;
            if (newData->control) {
                volatile long* counter =
                    reinterpret_cast<volatile long*>(newData->control);
                ++counter;
                _InterlockedIncrement(counter);
            }
        }
    }

    Entry* oldEnd = oldData + oldCount;
    if (oldData < oldEnd) {
        Control** current = &oldData->control;
        unsigned int remaining =
            ((reinterpret_cast<unsigned int>(oldEnd) -
              reinterpret_cast<unsigned int>(oldData) - 1) >> 3) + 1;
        do {
            Control* control = *current;
            if (control) {
                if (_InterlockedDecrement(&control->strong) == 0) {
                    control->dispose();
                    if (_InterlockedDecrement(&control->weak) == 0)
                        control->destroy();
                }
            }
            current += 2;
        } while (--remaining);
    }

    alignedFree(oldData);
}
