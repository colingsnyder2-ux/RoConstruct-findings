// from server: 100% by king_originala
// roc 2008-06 004db610  unit: RBX::ViewNew::ViewG3D  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004db610
//
// 004db610  807c240400           cmp byte ptr [esp + 4], 0
// 004db615  56                   push esi
// 004db616  8bf1                 mov esi, ecx
// 004db618  c6464400             mov byte ptr [esi + 0x44], 0
// 004db61c  7433                 je 0x4db651
// 004db61e  8b4648               mov eax, dword ptr [esi + 0x48]
// 004db621  85c0                 test eax, eax
// 004db623  742c                 je 0x4db651
// 004db625  83c004               add eax, 4
// 004db628  50                   push eax
// 004db629  ff15ac218000         call dword ptr [0x8021ac]
// 004db62f  85c0                 test eax, eax
// 004db631  7517                 jne 0x4db64a
// 004db633  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 004db636  e855f7f7ff           call 0x45ad90
// 004db63b  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 004db63e  85c9                 test ecx, ecx
// 004db640  7408                 je 0x4db64a
// 004db642  8b01                 mov eax, dword ptr [ecx]
// 004db644  8b10                 mov edx, dword ptr [eax]
// 004db646  6a01                 push 1
// 004db648  ffd2                 call edx
// 004db64a  c7464800000000       mov dword ptr [esi + 0x48], 0
// 004db651  5e                   pop esi
// 004db652  c20400               ret 4

extern "C" long (__stdcall *InterlockedDecrement)(volatile long *);

struct Resource {
    virtual ~Resource();
    volatile long references;
    void release();
};

struct View {
    char padding[0x44];
    bool active;
    Resource *resource;

    void reset(bool dispose);
};

void View::reset(bool dispose)
{
    active = false;
    if (dispose && resource) {
        if (InterlockedDecrement(&resource->references) == 0) {
            resource->release();
            if (resource)
                delete resource;
        }
        resource = 0;
    }
}
