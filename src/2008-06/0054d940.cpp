// from server: 100% by king_originala
// roc 2008-06 0054d940  unit: RBX::RenderBase::Mesh  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054d940
//
// 0054d940  55                   push ebp
// 0054d941  8bec                 mov ebp, esp
// 0054d943  51                   push ecx
// 0054d944  894dfc               mov dword ptr [ebp - 4], ecx
// 0054d947  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d94a  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 0054d951  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d954  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 0054d95b  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054d95e  c7421400000000       mov dword ptr [edx + 0x14], 0
// 0054d965  837d0800             cmp dword ptr [ebp + 8], 0
// 0054d969  7506                 jne 0x54d971
// 0054d96b  32c0                 xor al, al
// 0054d96d  eb4b                 jmp 0x54d9ba
// 0054d96f  eb47                 jmp 0x54d9b8
// 0054d971  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d974  e8e7ebf8ff           call 0x4dc560
// 0054d979  3b4508               cmp eax, dword ptr [ebp + 8]
// 0054d97c  7307                 jae 0x54d985
// 0054d97e  e8bd93f7ff           call 0x4c6d40
// 0054d983  eb33                 jmp 0x54d9b8
// 0054d985  8b4508               mov eax, dword ptr [ebp + 8]
// 0054d988  50                   push eax
// 0054d989  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d98c  83c108               add ecx, 8
// 0054d98f  e8dcebf8ff           call 0x4dc570
// 0054d994  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d997  89410c               mov dword ptr [ecx + 0xc], eax
// 0054d99a  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054d99d  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d9a0  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0054d9a3  894a10               mov dword ptr [edx + 0x10], ecx
// 0054d9a6  8b5508               mov edx, dword ptr [ebp + 8]
// 0054d9a9  6bd20c               imul edx, edx, 0xc
// 0054d9ac  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d9af  03500c               add edx, dword ptr [eax + 0xc]
// 0054d9b2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d9b5  895114               mov dword ptr [ecx + 0x14], edx
// 0054d9b8  b001                 mov al, 1
// 0054d9ba  8be5                 mov esp, ebp
// 0054d9bc  5d                   pop ebp
// 0054d9bd  c20400               ret 4

#pragma optimize("", off)

struct Element {
    unsigned char data[12];
};

struct Allocator {
    unsigned int reserved;
    Element* allocate(unsigned int count);
};

extern void allocation_error();

struct S {
    unsigned char reserved[8];
    Allocator allocator;
    Element* first;
    Element* last;
    Element* limit;

    unsigned int max_size();
    bool reserve(unsigned int count);
};

bool S::reserve(unsigned int count)
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
