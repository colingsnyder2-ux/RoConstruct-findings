// roc 2009-12 0044bb40  unit: CRobloxApp  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044bb40
//
// 0044bb40  56                   push esi
// 0044bb41  8bf1                 mov esi, ecx
// 0044bb43  8b06                 mov eax, dword ptr [esi]
// 0044bb45  8b08                 mov ecx, dword ptr [eax]
// 0044bb47  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044bb4a  03c8                 add ecx, eax
// 0044bb4c  ff1560b69800         call dword ptr [0x98b660]
// 0044bb52  85c0                 test eax, eax
// 0044bb54  7418                 je 0x44bb6e
// 0044bb56  8b06                 mov eax, dword ptr [esi]
// 0044bb58  8b10                 mov edx, dword ptr [eax]
// 0044bb5a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044bb5d  03c8                 add ecx, eax
// 0044bb5f  ff1560b69800         call dword ptr [0x98b660]
// 0044bb65  8bc8                 mov ecx, eax
// 0044bb67  5e                   pop esi
// 0044bb68  ff255cb69800         jmp dword ptr [0x98b65c]
// 0044bb6e  5e                   pop esi
// 0044bb6f  c3                   ret 
// copied from an identical function in another client (function ?Unlock@CIDEDocManager@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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