// from server: 100% by king_originala
// roc 2008-06 0044a0b0  unit: CIDEDocManager  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a0b0
//
// 0044a0b0  56                   push esi
// 0044a0b1  8bf1                 mov esi, ecx
// 0044a0b3  8b06                 mov eax, dword ptr [esi]
// 0044a0b5  8b08                 mov ecx, dword ptr [eax]
// 0044a0b7  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044a0ba  03c8                 add ecx, eax
// 0044a0bc  ff15c4238000         call dword ptr [0x8023c4]
// 0044a0c2  85c0                 test eax, eax
// 0044a0c4  7418                 je 0x44a0de
// 0044a0c6  8b06                 mov eax, dword ptr [esi]
// 0044a0c8  8b10                 mov edx, dword ptr [eax]
// 0044a0ca  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044a0cd  03c8                 add ecx, eax
// 0044a0cf  ff15c4238000         call dword ptr [0x8023c4]
// 0044a0d5  8bc8                 mov ecx, eax
// 0044a0d7  5e                   pop esi
// 0044a0d8  ff25c0238000         jmp dword ptr [0x8023c0]
// 0044a0de  5e                   pop esi
// 0044a0df  c3                   ret 

struct Stream {
    int* offsets;
};

struct Buffer;

extern Buffer* (__thiscall* rdbuf)(const void*);
extern void (__thiscall* unlock)(Buffer*);

struct CIDEDocManager {
    Stream* stream;
    void Unlock();
};

void CIDEDocManager::Unlock()
{
    if (rdbuf(reinterpret_cast<const char*>(stream) + stream->offsets[1]))
        unlock(rdbuf(reinterpret_cast<const char*>(stream) + stream->offsets[1]));
}
