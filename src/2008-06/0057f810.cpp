// from server: 76% by king_originala
#include <intrin.h>
// from server: 69% by colin
// from server: 65% by king_originala
// roc 2008-06 0057f810  unit: RBX::VModelInstance::?$FilteredSelection  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057f810
//
// 0057f810  6aff                 push -1
// 0057f812  6818047c00           push 0x7c0418
// 0057f817  64a100000000         mov eax, dword ptr fs:[0]
// 0057f81d  50                   push eax
// 0057f81e  64892500000000       mov dword ptr fs:[0], esp
// 0057f825  83ec14               sub esp, 0x14
// 0057f828  53                   push ebx
// 0057f829  55                   push ebp
// 0057f82a  56                   push esi
// 0057f82b  57                   push edi
// 0057f82c  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057f830  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057f834  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0057f837  83c614               add esi, 0x14
// 0057f83a  51                   push ecx
// 0057f83b  8d542414             lea edx, [esp + 0x14]
// 0057f83f  52                   push edx
// 0057f840  8d4808               lea ecx, [eax + 8]
// 0057f843  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0057f84b  e8c0c10900           call 0x61ba10
// 0057f850  8b18                 mov ebx, dword ptr [eax]
// 0057f852  8b6804               mov ebp, dword ptr [eax + 4]
// 0057f855  8b442438             mov eax, dword ptr [esp + 0x38]
// 0057f859  89742418             mov dword ptr [esp + 0x18], esi
// 0057f85d  8b701c               mov esi, dword ptr [eax + 0x1c]
// 0057f860  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0057f863  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0057f867  896c2420             mov dword ptr [esp + 0x20], ebp
// 0057f86b  397e14               cmp dword ptr [esi + 0x14], edi
// 0057f86e  7606                 jbe 0x57f876
// 0057f870  ff1590288000         call dword ptr [0x802890]
// 0057f876  8b7608               mov esi, dword ptr [esi + 8]
// 0057f879  85db                 test ebx, ebx
// 0057f87b  7404                 je 0x57f881
// 0057f87d  3bde                 cmp ebx, esi
// 0057f87f  740a                 je 0x57f88b
// 0057f881  8b3590288000         mov esi, dword ptr [0x802890]
// 0057f887  ffd6                 call esi
// 0057f889  eb06                 jmp 0x57f891
// 0057f88b  8b3590288000         mov esi, dword ptr [0x802890]
// 0057f891  3bef                 cmp ebp, edi
// 0057f893  746e                 je 0x57f903
// 0057f895  85db                 test ebx, ebx
// 0057f897  7566                 jne 0x57f8ff
// 0057f899  ffd6                 call esi
// 0057f89b  3b6b10               cmp ebp, dword ptr [ebx + 0x10]
// 0057f89e  7202                 jb 0x57f8a2
// 0057f8a0  ffd6                 call esi
// 0057f8a2  8b6d00               mov ebp, dword ptr [ebp]
// 0057f8a5  6a00                 push 0
// 0057f8a7  6878959200           push 0x929578
// 0057f8ac  68b4959200           push 0x9295b4
// 0057f8b1  6a00                 push 0
// 0057f8b3  55                   push ebp
// 0057f8b4  e80d1f1200           call 0x6a17c6
// 0057f8b9  83c414               add esp, 0x14
// 0057f8bc  85c0                 test eax, eax
// 0057f8be  7443                 je 0x57f903
// 0057f8c0  8d4c2410             lea ecx, [esp + 0x10]
// 0057f8c4  51                   push ecx
// 0057f8c5  8d4c241c             lea ecx, [esp + 0x1c]
// 0057f8c9  e8e27be9ff           call 0x4174b0
// 0057f8ce  8bc8                 mov ecx, eax
// 0057f8d0  e82bd7f2ff           call 0x4ad000
// 0057f8d5  84c0                 test al, al
// 0057f8d7  742a                 je 0x57f903
// 0057f8d9  8d4c2438             lea ecx, [esp + 0x38]
// 0057f8dd  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0057f8e5  e8760d0800           call 0x600660
// 0057f8ea  5f                   pop edi
// 0057f8eb  5e                   pop esi
// 0057f8ec  5d                   pop ebp
// 0057f8ed  b001                 mov al, 1
// 0057f8ef  5b                   pop ebx
// 0057f8f0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057f8f4  64890d00000000       mov dword ptr fs:[0], ecx
// 0057f8fb  83c420               add esp, 0x20
// 0057f8fe  c3                   ret 
// 0057f8ff  8b1b                 mov ebx, dword ptr [ebx]
// 0057f901  eb98                 jmp 0x57f89b
// 0057f903  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0057f907  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0057f90f  85f6                 test esi, esi
// 0057f911  742a                 je 0x57f93d
// 0057f913  8d5604               lea edx, [esi + 4]
// 0057f916  83c8ff               or eax, 0xffffffff
// 0057f919  f00fc102             lock xadd dword ptr [edx], eax
// 0057f91d  751e                 jne 0x57f93d
// 0057f91f  8b16                 mov edx, dword ptr [esi]
// 0057f921  8b4204               mov eax, dword ptr [edx + 4]
// 0057f924  8bce                 mov ecx, esi
// 0057f926  ffd0                 call eax
// 0057f928  8d4e08               lea ecx, [esi + 8]
// 0057f92b  83caff               or edx, 0xffffffff
// 0057f92e  f00fc111             lock xadd dword ptr [ecx], edx
// 0057f932  7509                 jne 0x57f93d
// 0057f934  8b06                 mov eax, dword ptr [esi]
// 0057f936  8b5008               mov edx, dword ptr [eax + 8]
// 0057f939  8bce                 mov ecx, esi
// 0057f93b  ffd2                 call edx
// 0057f93d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057f941  5f                   pop edi
// 0057f942  5e                   pop esi
// 0057f943  5d                   pop ebp
// 0057f944  32c0                 xor al, al
// 0057f946  5b                   pop ebx
// 0057f947  64890d00000000       mov dword ptr fs:[0], ecx
// 0057f94e  83c420               add esp, 0x20
// 0057f951  c3                   ret 


extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char propertyType;
extern char booleanPropertyType;

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    __forceinline void release() {
        if (_InterlockedDecrement(&strong) == 0) {
            dispose();
            if (_InterlockedDecrement(&weak) == 0)
                destroy();
        }
    }
};

struct Model;

struct Shared {
    Model* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Property {
    bool get();
};

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Position {
    Proxy* proxy;
    Property** position;
};

struct Vector {
    Proxy* proxy;
    unsigned reserved[2];
    Property** first;
    Property** last;

    Position find(void* key);
};

struct Storage {
    unsigned reserved[2];
    Vector values;
};

struct Selection {
    unsigned reserved[2];
    Storage* storage;
};

struct Model {
    unsigned reserved[5];
    Selection selection;
};

struct Iterator {
    Selection* owner;
    Proxy* proxy;
    Property** position;

    Iterator(Selection*o,const Position&p):owner(o),proxy(p.proxy),position(p.position){}
    Property* get(Position* temporary);
};

bool filteredSelection(void* key, Shared model)
{
    Selection* selection = &model.object->selection;
    Iterator iterator(selection,selection->storage->values.find(key));
    Proxy* proxy=iterator.proxy;
    Property** position=iterator.position;

    Storage* storage = model.object->selection.storage;
    Property** end = storage->values.last;

    if (storage->values.first > end)
        _invalid_parameter_noinfo();

    Proxy* expected = storage->values.proxy;
    if (!proxy || proxy != expected)
        _invalid_parameter_noinfo();

    if (position != end) {
        Vector* vector;
        if (!proxy)
            _invalid_parameter_noinfo();
        vector = proxy->owner;

        if (position >= vector->last)
            _invalid_parameter_noinfo();

        Property* property = *position;
        if (__RTDynamicCast(property, 0, &propertyType,
                            &booleanPropertyType, 0)) {
            Position temporary;
            if (iterator.get(&temporary)->get())
                return true;
        }
    }

    return false;
}
