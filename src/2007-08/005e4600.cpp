// from server: 35% by colin
// roc 2007-08 005e4600  unit: RBX::BoxSelectCommand  size: 297 bytes
// library rbxgs/util/Name.cpp

extern "C" void __stdcall _invalid_parameter_noinfo();

struct SharedPtr {
    void* px;
    void* pn;
};

struct SetNode {
    SetNode* left;
    SetNode* parent;
    SetNode* right;
    char color;
    char pad[3];
    int value;
};

struct Set {
    SetNode* head;
    int size;
};

struct BoxSelectCommand {
    char pad0[0x18];
    Set previousItemsInBox;
    char pad1[0x8];
    void selectAnd(const Set& newItemsInBox);
    void selectReverse(const Set& newItemsInBox);
    void getMouseInstances(Set& instances, const SharedPtr& inputObject,
                           const void* selectBox, const void* camera,
                           void* currentInstance);
    void onMouseMove(const SharedPtr& inputObject);
};

void BoxSelectCommand::onMouseMove(const SharedPtr& inputObject)
{
    Set newItemsInBox;
    SetNode* first1;
    SetNode* last1;
    SetNode* first2;
    SetNode* last2;

    first1 = previousItemsInBox.head->left;
    last1 = previousItemsInBox.head;
    first2 = newItemsInBox.head->left;
    last2 = newItemsInBox.head;

    if (first1 != 0 && first1 != last1) {
        _invalid_parameter_noinfo();
    }
    if (first2 == last2) {
        goto done;
    }
    if (first1 != 0 && first1 != last1) {
        _invalid_parameter_noinfo();
    }
    if (first2 == last2) {
        goto done;
    }
    if (first1 == 0) {
        _invalid_parameter_noinfo();
    }
    if (first2 == first1->parent) {
        _invalid_parameter_noinfo();
    }
    if (first1 == 0) {
        _invalid_parameter_noinfo();
    }
    if (first2 == first1->parent) {
        _invalid_parameter_noinfo();
    }
    if (first1->value < first2->value) {
        if (first2 == first1->parent) {
            _invalid_parameter_noinfo();
        }
        getMouseInstances(newItemsInBox, inputObject, 0, 0, 0);
        goto loop;
    }
    if (first2 == first1->parent) {
        _invalid_parameter_noinfo();
    }
    if (first2 == first1->parent) {
        _invalid_parameter_noinfo();
    }
    if (first2->value < first1->value) {
        goto loop;
    }
    goto done;

loop:
    first1 = previousItemsInBox.head->left;
    last1 = previousItemsInBox.head;
    first2 = newItemsInBox.head->left;
    last2 = newItemsInBox.head;
    if (first1 != 0 && first1 != last1) {
        _invalid_parameter_noinfo();
    }
    if (first2 == last2) {
        goto done;
    }
    goto loop;

done:
    selectAnd(newItemsInBox);
    selectReverse(newItemsInBox);
}
