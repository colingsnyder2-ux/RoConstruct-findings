// from server: 100% by king_originala
// roc 2008-06 00553160  unit: RBX::RenderBase::AggregateChunk  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553160
//
// 00553160  55                   push ebp
// 00553161  8bec                 mov ebp, esp
// 00553163  51                   push ecx
// 00553164  894dfc               mov dword ptr [ebp - 4], ecx
// 00553167  8b45fc               mov eax, dword ptr [ebp - 4]
// 0055316a  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 00553171  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00553174  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 0055317b  8b55fc               mov edx, dword ptr [ebp - 4]
// 0055317e  c7421400000000       mov dword ptr [edx + 0x14], 0
// 00553185  837d0800             cmp dword ptr [ebp + 8], 0
// 00553189  7506                 jne 0x553191
// 0055318b  32c0                 xor al, al
// 0055318d  eb4b                 jmp 0x5531da
// 0055318f  eb47                 jmp 0x5531d8
// 00553191  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00553194  e8b7000000           call 0x553250
// 00553199  3b4508               cmp eax, dword ptr [ebp + 8]
// 0055319c  7307                 jae 0x5531a5
// 0055319e  e8cd000000           call 0x553270
// 005531a3  eb33                 jmp 0x5531d8
// 005531a5  8b4508               mov eax, dword ptr [ebp + 8]
// 005531a8  50                   push eax
// 005531a9  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005531ac  83c108               add ecx, 8
// 005531af  e83c010000           call 0x5532f0
// 005531b4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005531b7  89410c               mov dword ptr [ecx + 0xc], eax
// 005531ba  8b55fc               mov edx, dword ptr [ebp - 4]
// 005531bd  8b45fc               mov eax, dword ptr [ebp - 4]
// 005531c0  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005531c3  894a10               mov dword ptr [edx + 0x10], ecx
// 005531c6  8b5508               mov edx, dword ptr [ebp + 8]
// 005531c9  6bd228               imul edx, edx, 0x28
// 005531cc  8b45fc               mov eax, dword ptr [ebp - 4]
// 005531cf  03500c               add edx, dword ptr [eax + 0xc]
// 005531d2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005531d5  895114               mov dword ptr [ecx + 0x14], edx
// 005531d8  b001                 mov al, 1
// 005531da  8be5                 mov esp, ebp
// 005531dc  5d                   pop ebp
// 005531dd  c20400               ret 4

#pragma optimize("", off)

struct Element {
    char data[40];
};

struct Allocator {
    Element* allocate(unsigned int count);
};

void allocation_error();

struct S {
    char padding[8];
    Allocator allocator;
    Element* first;
    Element* last;
    Element* limit;

    unsigned int max_size();
    bool allocate(unsigned int count);
};

bool S::allocate(unsigned int count)
{
    first = 0;
    last = 0;
    limit = 0;

    if (count == 0) {
        return false;
    } else if (max_size() < count) {
        allocation_error();
    } else {
        first = allocator.allocate(count);
        last = first;
        limit = first + count;
    }

    return true;
}
