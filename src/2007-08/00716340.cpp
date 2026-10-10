// from server: 44% by colin
struct RibbonTab;

struct ContextHeader
{
    RibbonTab* firstTab;
    RibbonTab* lastTab;
    int color;
    int rect[4];

    ContextHeader(RibbonTab* tab);
};

struct RibbonTab
{
    int m_first;
    int m_last;
    ContextHeader* m_contextHeader;
    int m_rect[4];

    RibbonTab(int* text, RibbonTab* parent);
};

extern "C" int __stdcall SetRectEmpty(int*);
extern "C" void* __stdcall sub_77DDAC();
extern "C" void* __stdcall sub_77D434();
extern "C" void* __stdcall sub_77DDBC();
extern "C" void* __stdcall sub_77EE14();
extern "C" int* __stdcall sub_6A7640(RibbonTab*);

ContextHeader::ContextHeader(RibbonTab* tab)
{
    this->firstTab = tab;
    this->lastTab = tab;
    this->color = *(int*)((char*)tab + 0x94);
    SetRectEmpty(this->rect);
    sub_77DDAC();
    sub_77D434();
    sub_77DDBC();
    sub_77EE14();
    *(ContextHeader**)((char*)tab + 0x9c) = this;
}

RibbonTab::RibbonTab(int* text, RibbonTab* parent)
{
    this->m_first = (int)parent;
    this->m_last = (int)parent;
    this->m_contextHeader = 0;
    sub_77DDAC();
    this->m_first = (int)parent;
    this->m_last = (int)parent;
    this->m_contextHeader = (ContextHeader*)*(int*)((char*)parent + 0x94);
    sub_6A7640(parent);
    sub_77D434();
    sub_77DDBC();
    sub_77EE14();
    *(RibbonTab**)((char*)parent + 0x9c) = this;
}
