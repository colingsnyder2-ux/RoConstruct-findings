// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_treehitmanager_bc450e10e1317cd9.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
// from server: 81% by king_originala
typedef boost::shared_ptr<void> Shared;
struct Result : Shared {};

struct Selection
{
    unsigned char storage[12];

    Selection(Shared);
    ~Selection();
};

struct Point
{
    int x;
    int y;
};

struct Tree;



struct Tree
{
    virtual void slot0();
virtual void slot1();
virtual void slot2();
virtual void slot3();
virtual void slot4();
virtual void slot5();
virtual void slot6();
virtual void slot7();
virtual void slot8();
virtual void slot9();
virtual void slot10();
virtual void slot11();
virtual void slot12();
virtual void slot13();
virtual void slot14();
virtual void slot15();
virtual void slot16();
virtual void slot17();
virtual void slot18();
virtual void slot19();
virtual void slot20();
virtual void slot21();
virtual void slot22();
virtual void slot23();
virtual void slot24();
virtual void slot25();
virtual void slot26();
virtual void slot27();
virtual void slot28();
virtual void slot29();
virtual void slot30();
virtual void slot31();
virtual void slot32();
virtual void slot33();
virtual void slot34();
virtual void slot35();
virtual void slot36();
virtual void slot37();
virtual void slot38();
virtual void slot39();
virtual void slot40();
virtual void slot41();
virtual void slot42();
virtual void slot43();
virtual void slot44();
virtual void slot45();
virtual void slot46();
virtual void slot47();
virtual void slot48();
virtual void slot49();
virtual void slot50();
virtual void slot51();
virtual void slot52();
virtual void slot53();
virtual void slot54();
virtual void slot55();
virtual void slot56();
virtual void slot57();
virtual void slot58();
virtual void slot59();
virtual void slot60();
virtual void slot61();
virtual void slot62();
virtual void slot63();
virtual void slot64();
virtual void slot65();
virtual void slot66();
virtual void slot67();
virtual void slot68();
virtual void slot69();
virtual void slot70();
virtual void slot71();
virtual void slot72();
virtual void slot73();
virtual void slot74();
virtual void slot75();
virtual void slot76();
virtual void slot77();
virtual void slot78();
virtual void slot79();
virtual void slot80();
virtual void slot81();
virtual void slot82();
virtual void slot83();
virtual void slot84();
virtual Result getSelection();

    void focus();
    void* hitTest(Point, unsigned int*);
    char* itemData(void*);
    void func_004237d0(unsigned int, Point);
};

struct Manager
{
    void select(Shared);
};

struct Context
{
    void* unused;
    Manager* volatile manager;
};

extern Shared __cdecl func_004236d0(void*);
extern Context* __cdecl func_006a0926();

void Tree::func_004237d0(unsigned int flags, Point point)
{
    focus();
    if (flags & 0x0c)
        return;

    void* item = hitTest(point, &flags);
    if (!item)
        return;
    if (!(flags & 0x46))
        return;

    char* data = itemData(item);
    if (!data)
        return;

    Shared value = func_004236d0(data + 12);
    if (value.get())
    {
        Selection selection(getSelection());
        func_006a0926()->manager->select(value);
    }
}
