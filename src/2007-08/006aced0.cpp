// from server: 58% by colin
struct CXTPRibbonBar {
    void* setColor(const char* name);
    void* getColor(int index);
};

void* CXTPRibbonBar::getColor(int index)
{
    void* result = 0;
    switch (index - 1) {
    case 0:
        result = setColor("BLUE");
        break;
    case 1:
        result = setColor("CYAN");
        break;
    case 2:
        result = setColor("GREEN");
        break;
    case 3:
        result = setColor("ORANGE");
        break;
    case 4:
        result = setColor("PURPLE");
        break;
    case 5:
        result = setColor("YELLOW");
        break;
    case 6:
        result = setColor("hTYx");
        break;
    default:
        result = setColor("list<T> too long");
        break;
    }
    return result;
}
