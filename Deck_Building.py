def New_deck():
    print('How many card would you like to play?')
    print('[Assistant:It is can be at least 40 cards, max is 60 cards]')
    print('Please enter in deck count ' + name + ' : ')
    deck = int(input())
    placeholder = input(
        'Ok ' + name + ' will you play place holder?(yes or no) \n [Assistant: This is only good for 40 card decks]')

    if placeholder == str("yes"):
        deck -= 1
        print('Deck number: ')
        print(deck)
    elif placeholder == str("no"):
        print('Deck number: ')
        print(deck)
    else:
        print('please type yes or no')
        return placeholder

    def card_tools():
        print('Ok now tell me how many extender,starter,Defensive, and omni cards you want to play?')
        print(
            'Assistant:Starter cards will create consistent in deck flow. \n To many of these will create a problem '
            'with your deck ability to continue plays...')

        starters = int(input())
        int(starters)
        print(
            'Assistant:Extenders are cards that helps with continuing plays. \n If you have to many of these you will '
            'have problems with consistency...')
        extenders = int(input())
        int(extenders)
        print(
            'Assistant:Defensive card do 3 things depending on the situation, keep you in the game, keep opposite '
            'from playing the game, and/or end the game. \n Too many of these will prevent you from creating offence. '
            '')
        defensive = int(input())
        int(defensive)
        print(
            'Assistant:Omni cards are game changing or game ending cards. \n Usually a very low number played in deck '
            'to power creep, either banned or limited, or creates balancing problems. \n Can be extender,starter, '
            'and Defensive.')
        omni = int(input())
        int(omni)
        if starters > deck:
            return card_tools()
        elif extenders > deck:
            return card_tools()
        elif defensive > deck:
            return card_tools()
        elif omni > deck:
            return card_tools()
        else:
            pass

        print('Ok here are your values...\n')
        print('Num of starters:')
        print(starters)
        print('Num of extenders')
        print(extenders)
        print('Num of Defensive cards: ')
        print(defensive)
        print('Num of omni cards: ')
        print(omni)

        def omni_value():
            if omni > 0:
                print('How many omni cards are starters?: ')
                omni_starter = int(input())
                int(omni_starter)
                print(omni_starter)
                print('Got it ' + name + '. Next...')
                print('How many omni cards are extender?: ')
                omni_extender = int(input())
                int(omni_extender)
                print(omni_extender)
                print('Got it ' + name + '. Next...')
                print('How many omni cards are defensive cards?: ')
                omni_defensive = int(input())
                int(omni_defensive)
                print(omni_defensive)
                print('Got it ' + name + '. Next...')
                print('How many omni cards are not any of the 3?: ')
                omni_cards = int(input())
                int(omni_cards)
                print(omni_cards)
                print('Got it ' + name + '. Lets add them together.')
                o_total = int(omni_starter + omni_extender + omni_defensive + omni_cards)
                print(o_total)

            if omni != o_total:
                print(name + ' try again Please. It is not equal to number of omni cards...')
                return omni_value()

            if deck != 39:
                c_total = int(starters + extenders + defensive + omni_starter + omni_defensive + omni_extender - omni_cards + 1)
            else:
                c_total = int(starters + extenders + defensive + omni_starter + omni_defensive + omni_extender - omni_cards-1)

            print('With the data on you deck your count should be: ')
            print(c_total)
            if c_total != deck:
                print('Ok ' + name + ' there is something wrong with your deck number. Re-enter...')
                return card_tools()
            else:
                pass

            print('Great!!')
            print('Now the next step is to calculate the % of getting a certain card and label the type of deck...')
            print('Here is what I have in terms of your % of type of card in deck:')

            fraction_of_starters = int((starters / deck) * 100)
            fraction_of_extenders = int((extenders / deck) * 100)
            fraction_of_defensive = int((defensive / deck) * 100)
            fraction_of_omni = int((omni / deck) * 100)
            print('%: ')
            print(fraction_of_starters)
            print(fraction_of_extenders)
            print(fraction_of_defensive)
            print(fraction_of_omni)
            y = int()
            hand = input('please enter in the if you want to test for going first or second:')
            if hand == str('first'):
                y = 5
            elif hand == str('second'):
                y = 6
            else:
                while hand != str('first') or str('second'):
                    print('re-enter please ')
                    hand = input('please enter in the if you want to test number for going first or second:')
                    if hand == str('first') or str('second'):
                        break
            print('Now enter in the amount of time you want to see your card in hand: ')
            v = int(input())
            if v > 5 and hand == str('first'):
                while v > 5 and v != 0:
                    print('too big: ')
                    v = int(input())
            elif v > 6 and hand == str('second'):
                while v > 6 and v != 0:
                    print('too big: ')
                    v = int(input())
            elif v < 1:
                while v < 1:
                    v = int(input())
                if v > 1:
                    pass
            else:
                print('ok..')

            n = int(starters)
            e = int(extenders)
            d = int(defensive)
            o = int(omni)
            m = int(deck)
            k = int(starters - v)
            a = int(extenders - v)
            b = int(defensive - v)
            t = int(omni - v)
            q = int(deck - starters)
            u = int(deck - extenders)
            g = int(deck - defensive)
            w = int(deck - omni)
            x = int(deck - y)
            i=0
            dih = int(y - v)  # the difference num - number of time you want to see card in hand
            dif_value1 = int(deck - starters - dih)
            dif_value2 = int(deck - extenders - dih)
            dif_value3 = int(deck - defensive - dih)
            dif_value4 = int(deck - omni - dih)

            for i in range(n-1):
                n = n * (i+1)
                print(n)

            for i in range(e-1):
                e = e * (i+1)
                print (e)

            for i in range(d-1):
                d = d * (i+1)
                print(d)

            for i in range(int(omni-1)):
                o = o * (i+1)
                print(o)

            for i in range(int(deck-1)):
                m = m * (i+1)
                print(m)

            for i in range(k-1):
                k = k * (i+1)
                print(k)

            for i in range(a-1):
                a = a * (i+1)
                print(a)

            for i in range(b-1):
                b = b * (i+1)
                print(b)

            for i in range(t-1):
                t = t * (i+1)
                print(t)


            for i in range(q-1):
                q = q * (i + 1)
                print(q)
            for i in range(u-1):
                u = u * (i+1)
                print(u)

            for i in range(g-1):
                g = g * (i+1)
                print(g)

            for i in range(w-1):
                w = w * (1+1)
                print(w)

            for i in range(y-1):
                y = y * (i+1)
                print ('.')

            for i in range(x-1):
                x = x * (i+1)
                print(x)
                print ('.')

            for i in range(dif_value1-1):
                dif_value1 = dif_value1 * (i+1)
                print (dif_value1)
            for i in range(dif_value2-1):
                dif_value2 = dif_value2 * (i+1)
                print (dif_value2)
            for i in range(dif_value3-1):
                dif_value3 = dif_value3 * (i+1)
                print (dif_value3)
            for i in range(dif_value4-1):
                dif_value4 = dif_value4 * (i+1)
                print (dif_value4)
            for i in range(dih-1):
                dih = dih * (i+1)
                print (dih)
            print('values collected...')

            h_a = float((((n / (v * k)) * (q / (dih * dif_value1))) / (m / (y * x))) * 100)
            h_b = float((((e / (v * a)) * (u / (dih * dif_value2))) / (m / (y * x))) * 100)
            h_c = float((((d / (v * b)) * (g / (dih * dif_value3))) / (m / (y * x))) * 100)
            h_d = float((((o / (v * t)) * (w / (dih * dif_value4))) / (m / (y * x))) * 100)
            print('I have calculated you numbers of seeing the number of cards in hand: ')
            print('%: ')
            print(h_a)
            print('____')
            print(h_b)
            print('____')
            print(h_c)
            print('____')
            print(h_d)
            print('Would you like to see the numbers(%) in a hand going second?: ')
            hand2 = input(':')
            if hand2 == str('yes'):
                y = 6
                x = int(deck - y)
                y = y * (i + 1)
                for i in range(x-1):
                    x = x * (i + 1)
                for i in range(y-1):
                    y = y * (i + 1)
                h_aw = float ((((n / (v * k)) * (q / (dih * dif_value1))) / (m / (y * x))) * 100)
                h_bx = float ((((e / (v * a)) * (u / (dih * dif_value2))) / (m / (y * x))) * 100)
                h_cy = float ((((d / (v * b)) * (g / (dih * dif_value3))) / (m / (y * x))) * 100)
                h_dz = float ((((o / (v * t)) * (w / (dih * dif_value4))) / (m / (y * x))) * 100)
                print('Here you are...')
                print('%: ')
                print(h_aw)
                print('____')
                print(h_bx)
                print('____')
                print(h_cy)
                print('____')
                print(h_dz)
            elif hand2 == str('no'):
                print('OK as you wish...')
            else:
                while hand2 != str('yes') or str('no'):
                    print('please answer yes or no...: ')
                    hand2 = input('')
        omni_value()
    card_tools()


name = input("Operator what is your full-name? ")
print('Hello ' + name + ' should I call you "sir", "miss", "name only", "none of them?"')
choice = input('option: ')
if choice == str("sir"):
    name = str("sir")
    print('I see... I shall call you ' + name)
elif choice == str("miss"):
    name = str("miss")
    print('I see.. I shall call you ' + name)
elif choice == str("name only"):
    print('Sounds good ' + name + '.')
elif choice == str("none of them"):
    print('Would you like to pick another choice or do you have a easy name i can call you ' + name + '?')
    name = input(name + " what is your nickname? ")
    print('Ok ' + name + 'shall be what I call you. Lets continue.')
else:
    option = input(
        'That is not really an option... Can you pick something else please? \n Would you like to pick another choice '
        'or do you have a easy name i can call you? \n Assistant:type "call me" for a new name. \n Assistant:type the '
        'word "options" for a more options.')

    if option == str("call me"):
        name = input(name + " what is your nickname? ")
        print('ok ' + name + ' shall be what I call you. Lets continue.')
    elif option == str("options"):
        choice = input('option: ')
        print('I see.. I shall call you ' + name + '.')
    else:
        print('Well if its ok with you I will call you ' + name)
print('Ok time to build.')
New_deck()
print('Godd luck ' + name)