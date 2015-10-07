#include <iostream>
#include <cstdlib>
using namespace std;

void screeningModule(int sblock[]);



int main()
{
    int sblock[15];

    cout << "Code 1 for not present, 2 for unsure or equivocal, 3 for present" << endl;

    screeningModule(sblock);

    return 0;
}


void screeningModule(int sblock[])
{
    cout << "Now I want to ask you some more specific questions you may have had.\n"
    << "We'll go into more detail about them later.\n" << endl;

    cout << "Has there been any time in your life when you had five or more drinks "
    << "(beer, wine, or liquor) on one occasion? " << flush;
    cin >> sblock[0];

    cout << "\nHave you ever used street drugs? " << flush;
    cin >> sblock[1];

    cout << "\nHave you ever gotten 'hooked' on a prescribed medicine or taken "
    << "a lot more of it than you were supposed to? " << flush;
    cin >> sblock[2];

    cout << "\nHave you ever had a panic attack, when you suddenly felt frightened or "
    << "anxious or suddenly developed physical symptoms? " << flush;
    cin >> sblock[3];

    cout << "\nWere you ever afraid of going out of the house alone, being in crowds, "
    << "standing in line, or traveling on buses or trains? " << flush;
    cin >> sblock[4];

    cout << "\nIs there anything that you have been afraid to do r felt uncomfortable "
    << "doing in front of other people, like speaking, eating, or writing? " << flush;
    cin >> sblock[5];

    cout << "\nAre there any other things that you have been especially afraid of, "
    << "like flying, seeing blood, getting a shot, heights, closed places, or certain "
    << "kinds of animals or insects? " << flush;
    cin >> sblock[6];

    cout << "\nHave you ever been bothered by thoughts that didn't make any sense "
    << "and kept coming back to you even when you tried not to have them? " << flush;
    cin >> sblock[7];
    if(sblock[7] == 2)
    {
        cout << "Thoughts like hurting someone even though you really didn't want "
        << "to or being contaminated by germs or dirt. " << flush;
        cin >> sblock[7];
    }

    cout << "\nWas there every anything that you had to do over and over again and "
    << "couldn't resist doing, like washing your hands again and again, counting "
    << "up to a certain number, or checking something several times to make "
    << "sure that you'd done it right? " << flush;
    cin >> sblock[8];

    cout << "\nIn the last six months, have you been particularly nervous or anxious? " << flush;
    cin >> sblock[9];

    cout << "\nHave you ever had a time when you weighed much less than other "
    << "people thought you ought to weigh? " << flush;
    cin >> sblock[10];

    cout << "\nHave you often had times when your eating was out of control? " << flush;
    cin >> sblock[11];

    cout << "\nDo you worry too much about your physical health? Does your doctor think "
    << "you worry too much? " << flush;
    cin >> sblock[12];
    if(sblock[12] == 1 or sblock[12] == 2)
    {
        cout << "Some people are very bothered by the way they look.  Is this a problem "
        << "for you? " << flush;
        cin >> sblock[12];
    }

    cout << "\nDo you worry a lot that you have a serious disease that the doctors have "
    << "not been able to diagnose? " << flush;
    cin >> sblock[13];

    cout << "\nSometimes things happen to people that are extremely upsetting -- things like "
    << "being in a life-threatening situation like a major disaster, very serious accident or "
    << "fire; being physically assaulted or raped; seeing another person killed or dead, or "
    << "badly hurt, or hearing about something horrible that has happened to someone "
    << "you are close to.  At any time during your life, have any of these kinds of things "
    << "happened to you? " << flush;
    cin >> sblock[14];
    if(sblock[14] == 2)
    {
        cout << "Have you ever been in an automobile accident? " << flush;
        cin >> sblock[14];

        if(sblock[14]==2)
        {
            cout << "Have you ever been the victim of a crime? " << flush;
            cin >> sblock[14];
        }
    }


    return;
}
