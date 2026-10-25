// from server: 67% by atomic.potato
// roc 2011-06 004f2280  unit: RBX::Network::IdSerializer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f2280
//
// 004f2280  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f2284  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f2288  56                   push esi
// 004f2289  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f228d  3bce                 cmp ecx, esi
// 004f228f  7430                 je 0x4f22c1
// 004f2291  57                   push edi
// 004f2292  85c0                 test eax, eax
// 004f2294  7420                 je 0x4f22b6
// 004f2296  8b11                 mov edx, dword ptr [ecx]
// 004f2298  8910                 mov dword ptr [eax], edx
// 004f229a  8b5104               mov edx, dword ptr [ecx + 4]
// 004f229d  895004               mov dword ptr [eax + 4], edx
// 004f22a0  8b5108               mov edx, dword ptr [ecx + 8]
// 004f22a3  895008               mov dword ptr [eax + 8], edx
// 004f22a6  85d2                 test edx, edx
// 004f22a8  740c                 je 0x4f22b6
// 004f22aa  83c204               add edx, 4
// 004f22ad  bf01000000           mov edi, 1
// 004f22b2  f00fc13a             lock xadd dword ptr [edx], edi
// 004f22b6  83c10c               add ecx, 0xc
// 004f22b9  83c00c               add eax, 0xc
// 004f22bc  3bce                 cmp ecx, esi
// 004f22be  75d2                 jne 0x4f2292
// 004f22c0  5f                   pop edi
// 004f22c1  5e                   pop esi
// 004f22c2  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct IdSerializer {
    int field0;
    int field4;
    void* field8;
};

void assign(IdSerializer* first, IdSerializer* last, IdSerializer* dest)
{
    if (first != last) {
        do {
            if (dest) {
                dest->field0 = first->field0;
                dest->field4 = first->field4;
                dest->field8 = first->field8;
                if (dest->field8) {
                    _InterlockedExchangeAdd((volatile long*)((char*)dest->field8 + 4), 1);
                }
            }
            first = (IdSerializer*)((char*)first + 0xc);
            dest = (IdSerializer*)((char*)dest + 0xc);
        } while (first != last);
    }
}
