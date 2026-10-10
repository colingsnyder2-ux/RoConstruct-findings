// from server: 65% by colin
struct CXTPAccessible {
    int m_field0;
    int m_field4;
    int m_field8;
    int m_fieldC;
    int m_field10;
    int m_field14;
    int m_field18;
    int m_field1C;
    CXTPAccessible* construct();
};

struct CXTPAccessibleHelper {
    void init();
    void setSomething(int);
    int checkSomething(int, int, int);
};

extern "C" void __stdcall sub_671240();
extern "C" void __stdcall sub_671f80();
extern "C" int __stdcall sub_671310();

CXTPAccessible* CXTPAccessible::construct()
{
    CXTPAccessibleHelper* helper = (CXTPAccessibleHelper*)((char*)this + 0x14);
    helper->init();
    helper->setSomething(0x7cb780);
    if (this->m_field1C != 0) {
        if (helper->checkSomething((int)this, 0x7cb76c, 0) != 0) {
            if (helper->checkSomething((int)&this->m_field4, 0x7cb758, 0) != 0) {
                if (helper->checkSomething((int)&this->m_field8, 0x7cb748, 0) != 0) {
                    if (helper->checkSomething((int)&this->m_fieldC, 0x7cb734, 0) != 0) {
                        if (helper->checkSomething((int)&this->m_field10, 0x7cb724, 0) != 0) {
                            return this;
                        }
                    }
                }
            }
        }
    }
    this->m_field0 = 0;
    this->m_field4 = 0;
    this->m_field8 = 0;
    this->m_fieldC = 0;
    this->m_field10 = 0;
    return this;
}
