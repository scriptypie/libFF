#include <iostream>
#include <string>
#include <fstream>

#include "ff/libFF.hpp"

int main()
{
    std::string text = 
        "Sir Philip Anthony Hopkins CBE (born 31 December 1937) is a Welsh actor, "
        "director, and producer.[2] One of Britain's most recognisable and prolific "
        "actors, he is known for his performances on the screen and stage. Hopkins has"
        " received many accolades throughout his career, including two Academy Awards, "
        "three British Academy Film Awards, a British Academy Television Award, "
        "two Primetime Emmy Awards and a Laurence Olivier Award. He has also received an honorary "
        "Golden Globe Award and the BAFTA Fellowship for lifetime achievement from the British "
        "Academy of Film and Television Arts. In 1993, he was knighted by Queen Elizabeth II for "
        "his services to the arts, and in 2003, he received a star on the Hollywood Walk of Fame "
        "for his achievements in the motion picture industry."
        "After graduating from the Royal Welsh College of Music & Drama in 1957, Hopkins trained "
        "at the Royal Academy of Dramatic Art in London. He was then spotted by Laurence Olivier who"
        "invited him to join the Royal National Theatre in 1965. Productions at the National included"
        "King Lear (his favourite Shakespeare play), Coriolanus, Macbeth, and Antony and Cleopatra. "
        "In 1985, he received great acclaim and a Laurence Olivier Award for his performance in the "
        "David Hare play Pravda. His last stage play was a West End production of M. Butterfly in 1989."
        "In 1968, Hopkins achieved recognition in film, playing Richard the Lionheart in The Lion in "
        "Winter. In the mid-1970s, he started a collaboration with Richard Attenborough who called him "
        "the greatest actor of his generation. Hopkins starred in Attenborough's A Bridge Too Far (1977), "
        "David Lynch's The Elephant Man (1980), and Jonathan Demme's The Silence of the Lambs (1991), "
        "in which he portrayed Hannibal Lecter, a role which earned him the Academy Award for Best Actor. "
        "He reprised the role in Hannibal (2001) and the prequel Red Dragon (2002). Other notable films "
        "include The Bounty (1984), 84 Charing Cross Road (1987), Howards End (1992), Bram Stoker's Dracula "
        "(1992), Shadowlands (1993), Legends of the Fall (1994), Meet Joe Black (1998), The Mask of Zorro (1998), "
        "and the Thor franchise (2011–2017), set in the Marvel Cinematic Universe. He received four more Academy "
        "Award nominations for James Ivory's The Remains of the Day (1993), Oliver Stone's Nixon (1995), "
        "Steven Spielberg's Amistad (1997) and Fernando Meirelles' The Two Popes (2019), before winning a "
        "fourth BAFTA Award and a second Academy Award for Best Actor for his portrayal of an elderly man "
        "diagnosed with dementia in The Father (2020), becoming the oldest Best Actor Oscar winner to date.[3][4]"
        "Since making his television debut with the BBC in 1967, Hopkins has continued to appear on television. "
        "In 1973, he received a British Academy Television Award for Best Actor for his performance in War and Peace. "
        "He received two Primetime Emmy Awards for portraying Richard Hauptmann in The Lindbergh Kidnapping Case (1976) "
        "and Adolf Hitler in The Bunker (1981). In 2015, he starred in the BBC film The Dresser, and in 2018, he starred in "
        "King Lear, earning a Screen Actors Guild Award nomination.[5] In 2016 and 2018, he starred in the HBO television series Westworld, "
        "for which he received a nomination for the Primetime Emmy Award for Outstanding Lead Actor in a Drama Series."
        "Sir Philip Anthony Hopkins CBE (born 31 December 1937) is a Welsh actor, "
        "director, and producer.[2] One of Britain's most recognisable and prolific "
        "actors, he is known for his performances on the screen and stage. Hopkins has"
        " received many accolades throughout his career, including two Academy Awards, "
        "three British Academy Film Awards, a British Academy Television Award, "
        "two Primetime Emmy Awards and a Laurence Olivier Award. He has also received an honorary "
        "Golden Globe Award and the BAFTA Fellowship for lifetime achievement from the British "
        "Academy of Film and Television Arts. In 1993, he was knighted by Queen Elizabeth II for "
        "his services to the arts, and in 2003, he received a star on the Hollywood Walk of Fame "
        "for his achievements in the motion picture industry."
        "After graduating from the Royal Welsh College of Music & Drama in 1957, Hopkins trained "
        "at the Royal Academy of Dramatic Art in London. He was then spotted by Laurence Olivier who"
        "invited him to join the Royal National Theatre in 1965. Productions at the National included"
        "King Lear (his favourite Shakespeare play), Coriolanus, Macbeth, and Antony and Cleopatra. "
        "In 1985, he received great acclaim and a Laurence Olivier Award for his performance in the "
        "David Hare play Pravda. His last stage play was a West End production of M. Butterfly in 1989."
        "In 1968, Hopkins achieved recognition in film, playing Richard the Lionheart in The Lion in "
        "Winter. In the mid-1970s, he started a collaboration with Richard Attenborough who called him "
        "the greatest actor of his generation. Hopkins starred in Attenborough's A Bridge Too Far (1977), "
        "David Lynch's The Elephant Man (1980), and Jonathan Demme's The Silence of the Lambs (1991), "
        "in which he portrayed Hannibal Lecter, a role which earned him the Academy Award for Best Actor. "
        "He reprised the role in Hannibal (2001) and the prequel Red Dragon (2002). Other notable films "
        "include The Bounty (1984), 84 Charing Cross Road (1987), Howards End (1992), Bram Stoker's Dracula "
        "(1992), Shadowlands (1993), Legends of the Fall (1994), Meet Joe Black (1998), The Mask of Zorro (1998), "
        "and the Thor franchise (2011–2017), set in the Marvel Cinematic Universe. He received four more Academy "
        "Award nominations for James Ivory's The Remains of the Day (1993), Oliver Stone's Nixon (1995), "
        "Steven Spielberg's Amistad (1997) and Fernando Meirelles' The Two Popes (2019), before winning a "
        "fourth BAFTA Award and a second Academy Award for Best Actor for his portrayal of an elderly man "
        "diagnosed with dementia in The Father (2020), becoming the oldest Best Actor Oscar winner to date.[3][4]"
        "Since making his television debut with the BBC in 1967, Hopkins has continued to appear on television. "
        "In 1973, he received a British Academy Television Award for Best Actor for his performance in War and Peace. "
        "He received two Primetime Emmy Awards for portraying Richard Hauptmann in The Lindbergh Kidnapping Case (1976) "
        "and Adolf Hitler in The Bunker (1981). In 2015, he starred in the BBC film The Dresser, and in 2018, he starred in "
        "King Lear, earning a Screen Actors Guild Award nomination.[5] In 2016 and 2018, he starred in the HBO television series Westworld, "
        "for which he received a nomination for the Primetime Emmy Award for Outstanding Lead Actor in a Drama Series."
        "Sir Philip Anthony Hopkins CBE (born 31 December 1937) is a Welsh actor, "
        "director, and producer.[2] One of Britain's most recognisable and prolific "
        "actors, he is known for his performances on the screen and stage. Hopkins has"
        " received many accolades throughout his career, including two Academy Awards, "
        "three British Academy Film Awards, a British Academy Television Award, "
        "two Primetime Emmy Awards and a Laurence Olivier Award. He has also received an honorary "
        "Golden Globe Award and the BAFTA Fellowship for lifetime achievement from the British "
        "Academy of Film and Television Arts. In 1993, he was knighted by Queen Elizabeth II for "
        "his services to the arts, and in 2003, he received a star on the Hollywood Walk of Fame "
        "for his achievements in the motion picture industry."
        "After graduating from the Royal Welsh College of Music & Drama in 1957, Hopkins trained "
        "at the Royal Academy of Dramatic Art in London. He was then spotted by Laurence Olivier who"
        "invited him to join the Royal National Theatre in 1965. Productions at the National included"
        "King Lear (his favourite Shakespeare play), Coriolanus, Macbeth, and Antony and Cleopatra. "
        "In 1985, he received great acclaim and a Laurence Olivier Award for his performance in the "
        "David Hare play Pravda. His last stage play was a West End production of M. Butterfly in 1989."
        "In 1968, Hopkins achieved recognition in film, playing Richard the Lionheart in The Lion in "
        "Winter. In the mid-1970s, he started a collaboration with Richard Attenborough who called him "
        "the greatest actor of his generation. Hopkins starred in Attenborough's A Bridge Too Far (1977), "
        "David Lynch's The Elephant Man (1980), and Jonathan Demme's The Silence of the Lambs (1991), "
        "in which he portrayed Hannibal Lecter, a role which earned him the Academy Award for Best Actor. "
        "He reprised the role in Hannibal (2001) and the prequel Red Dragon (2002). Other notable films "
        "include The Bounty (1984), 84 Charing Cross Road (1987), Howards End (1992), Bram Stoker's Dracula "
        "(1992), Shadowlands (1993), Legends of the Fall (1994), Meet Joe Black (1998), The Mask of Zorro (1998), "
        "and the Thor franchise (2011–2017), set in the Marvel Cinematic Universe. He received four more Academy "
        "Award nominations for James Ivory's The Remains of the Day (1993), Oliver Stone's Nixon (1995), "
        "Steven Spielberg's Amistad (1997) and Fernando Meirelles' The Two Popes (2019), before winning a "
        "fourth BAFTA Award and a second Academy Award for Best Actor for his portrayal of an elderly man "
        "diagnosed with dementia in The Father (2020), becoming the oldest Best Actor Oscar winner to date.[3][4]"
        "Since making his television debut with the BBC in 1967, Hopkins has continued to appear on television. "
        "In 1973, he received a British Academy Television Award for Best Actor for his performance in War and Peace. "
        "He received two Primetime Emmy Awards for portraying Richard Hauptmann in The Lindbergh Kidnapping Case (1976) "
        "and Adolf Hitler in The Bunker (1981). In 2015, he starred in the BBC film The Dresser, and in 2018, he starred in "
        "King Lear, earning a Screen Actors Guild Award nomination.[5] In 2016 and 2018, he starred in the HBO television series Westworld, "
        "for which he received a nomination for the Primetime Emmy Award for Outstanding Lead Actor in a Drama Series."
        "Sir Philip Anthony Hopkins CBE (born 31 December 1937) is a Welsh actor, "
        "director, and producer.[2] One of Britain's most recognisable and prolific "
        "actors, he is known for his performances on the screen and stage. Hopkins has"
        " received many accolades throughout his career, including two Academy Awards, "
        "three British Academy Film Awards, a British Academy Television Award, "
        "two Primetime Emmy Awards and a Laurence Olivier Award. He has also received an honorary "
        "Golden Globe Award and the BAFTA Fellowship for lifetime achievement from the British "
        "Academy of Film and Television Arts. In 1993, he was knighted by Queen Elizabeth II for "
        "his services to the arts, and in 2003, he received a star on the Hollywood Walk of Fame "
        "for his achievements in the motion picture industry."
        "After graduating from the Royal Welsh College of Music & Drama in 1957, Hopkins trained "
        "at the Royal Academy of Dramatic Art in London. He was then spotted by Laurence Olivier who"
        "invited him to join the Royal National Theatre in 1965. Productions at the National included"
        "King Lear (his favourite Shakespeare play), Coriolanus, Macbeth, and Antony and Cleopatra. "
        "In 1985, he received great acclaim and a Laurence Olivier Award for his performance in the "
        "David Hare play Pravda. His last stage play was a West End production of M. Butterfly in 1989."
        "In 1968, Hopkins achieved recognition in film, playing Richard the Lionheart in The Lion in "
        "Winter. In the mid-1970s, he started a collaboration with Richard Attenborough who called him "
        "the greatest actor of his generation. Hopkins starred in Attenborough's A Bridge Too Far (1977), "
        "David Lynch's The Elephant Man (1980), and Jonathan Demme's The Silence of the Lambs (1991), "
        "in which he portrayed Hannibal Lecter, a role which earned him the Academy Award for Best Actor. "
        "He reprised the role in Hannibal (2001) and the prequel Red Dragon (2002). Other notable films "
        "include The Bounty (1984), 84 Charing Cross Road (1987), Howards End (1992), Bram Stoker's Dracula "
        "(1992), Shadowlands (1993), Legends of the Fall (1994), Meet Joe Black (1998), The Mask of Zorro (1998), "
        "and the Thor franchise (2011–2017), set in the Marvel Cinematic Universe. He received four more Academy "
        "Award nominations for James Ivory's The Remains of the Day (1993), Oliver Stone's Nixon (1995), "
        "Steven Spielberg's Amistad (1997) and Fernando Meirelles' The Two Popes (2019), before winning a "
        "fourth BAFTA Award and a second Academy Award for Best Actor for his portrayal of an elderly man "
        "diagnosed with dementia in The Father (2020), becoming the oldest Best Actor Oscar winner to date.[3][4]"
        "Since making his television debut with the BBC in 1967, Hopkins has continued to appear on television. "
        "In 1973, he received a British Academy Television Award for Best Actor for his performance in War and Peace. "
        "He received two Primetime Emmy Awards for portraying Richard Hauptmann in The Lindbergh Kidnapping Case (1976) "
        "and Adolf Hitler in The Bunker (1981). In 2015, he starred in the BBC film The Dresser, and in 2018, he starred in "
        "King Lear, earning a Screen Actors Guild Award nomination.[5] In 2016 and 2018, he starred in the HBO television series Westworld, "
        "for which he received a nomination for the Primetime Emmy Award for Outstanding Lead Actor in a Drama Series."
        "Sir Philip Anthony Hopkins CBE (born 31 December 1937) is a Welsh actor, "
        "director, and producer.[2] One of Britain's most recognisable and prolific "
        "actors, he is known for his performances on the screen and stage. Hopkins has"
        " received many accolades throughout his career, including two Academy Awards, "
        "three British Academy Film Awards, a British Academy Television Award, "
        "two Primetime Emmy Awards and a Laurence Olivier Award. He has also received an honorary "
        "Golden Globe Award and the BAFTA Fellowship for lifetime achievement from the British "
        "Academy of Film and Television Arts. In 1993, he was knighted by Queen Elizabeth II for "
        "his services to the arts, and in 2003, he received a star on the Hollywood Walk of Fame "
        "for his achievements in the motion picture industry."
        "After graduating from the Royal Welsh College of Music & Drama in 1957, Hopkins trained "
        "at the Royal Academy of Dramatic Art in London. He was then spotted by Laurence Olivier who"
        "invited him to join the Royal National Theatre in 1965. Productions at the National included"
        "King Lear (his favourite Shakespeare play), Coriolanus, Macbeth, and Antony and Cleopatra. "
        "In 1985, he received great acclaim and a Laurence Olivier Award for his performance in the "
        "David Hare play Pravda. His last stage play was a West End production of M. Butterfly in 1989."
        "In 1968, Hopkins achieved recognition in film, playing Richard the Lionheart in The Lion in "
        "Winter. In the mid-1970s, he started a collaboration with Richard Attenborough who called him "
        "the greatest actor of his generation. Hopkins starred in Attenborough's A Bridge Too Far (1977), "
        "David Lynch's The Elephant Man (1980), and Jonathan Demme's The Silence of the Lambs (1991), "
        "in which he portrayed Hannibal Lecter, a role which earned him the Academy Award for Best Actor. "
        "He reprised the role in Hannibal (2001) and the prequel Red Dragon (2002). Other notable films "
        "include The Bounty (1984), 84 Charing Cross Road (1987), Howards End (1992), Bram Stoker's Dracula "
        "(1992), Shadowlands (1993), Legends of the Fall (1994), Meet Joe Black (1998), The Mask of Zorro (1998), "
        "and the Thor franchise (2011–2017), set in the Marvel Cinematic Universe. He received four more Academy "
        "Award nominations for James Ivory's The Remains of the Day (1993), Oliver Stone's Nixon (1995), "
        "Steven Spielberg's Amistad (1997) and Fernando Meirelles' The Two Popes (2019), before winning a "
        "fourth BAFTA Award and a second Academy Award for Best Actor for his portrayal of an elderly man "
        "diagnosed with dementia in The Father (2020), becoming the oldest Best Actor Oscar winner to date.[3][4]"
        "Since making his television debut with the BBC in 1967, Hopkins has continued to appear on television. "
        "In 1973, he received a British Academy Television Award for Best Actor for his performance in War and Peace. "
        "He received two Primetime Emmy Awards for portraying Richard Hauptmann in The Lindbergh Kidnapping Case (1976) "
        "and Adolf Hitler in The Bunker (1981). In 2015, he starred in the BBC film The Dresser, and in 2018, he starred in "
        "King Lear, earning a Screen Actors Guild Award nomination.[5] In 2016 and 2018, he starred in the HBO television series Westworld, "
        "for which he received a nomination for the Primetime Emmy Award for Outstanding Lead Actor in a Drama Series."
        "Sir Philip Anthony Hopkins CBE (born 31 December 1937) is a Welsh actor, "
        "director, and producer.[2] One of Britain's most recognisable and prolific "
        "actors, he is known for his performances on the screen and stage. Hopkins has"
        " received many accolades throughout his career, including two Academy Awards, "
        "three British Academy Film Awards, a British Academy Television Award, "
        "two Primetime Emmy Awards and a Laurence Olivier Award. He has also received an honorary "
        "Golden Globe Award and the BAFTA Fellowship for lifetime achievement from the British "
        "Academy of Film and Television Arts. In 1993, he was knighted by Queen Elizabeth II for "
        "his services to the arts, and in 2003, he received a star on the Hollywood Walk of Fame "
        "for his achievements in the motion picture industry."
        "After graduating from the Royal Welsh College of Music & Drama in 1957, Hopkins trained "
        "at the Royal Academy of Dramatic Art in London. He was then spotted by Laurence Olivier who"
        "invited him to join the Royal National Theatre in 1965. Productions at the National included"
        "King Lear (his favourite Shakespeare play), Coriolanus, Macbeth, and Antony and Cleopatra. "
        "In 1985, he received great acclaim and a Laurence Olivier Award for his performance in the "
        "David Hare play Pravda. His last stage play was a West End production of M. Butterfly in 1989."
        "In 1968, Hopkins achieved recognition in film, playing Richard the Lionheart in The Lion in "
        "Winter. In the mid-1970s, he started a collaboration with Richard Attenborough who called him "
        "the greatest actor of his generation. Hopkins starred in Attenborough's A Bridge Too Far (1977), "
        "David Lynch's The Elephant Man (1980), and Jonathan Demme's The Silence of the Lambs (1991), "
        "in which he portrayed Hannibal Lecter, a role which earned him the Academy Award for Best Actor. "
        "He reprised the role in Hannibal (2001) and the prequel Red Dragon (2002). Other notable films "
        "include The Bounty (1984), 84 Charing Cross Road (1987), Howards End (1992), Bram Stoker's Dracula "
        "(1992), Shadowlands (1993), Legends of the Fall (1994), Meet Joe Black (1998), The Mask of Zorro (1998), "
        "and the Thor franchise (2011–2017), set in the Marvel Cinematic Universe. He received four more Academy "
        "Award nominations for James Ivory's The Remains of the Day (1993), Oliver Stone's Nixon (1995), "
        "Steven Spielberg's Amistad (1997) and Fernando Meirelles' The Two Popes (2019), before winning a "
        "fourth BAFTA Award and a second Academy Award for Best Actor for his portrayal of an elderly man "
        "diagnosed with dementia in The Father (2020), becoming the oldest Best Actor Oscar winner to date.[3][4]"
        "Since making his television debut with the BBC in 1967, Hopkins has continued to appear on television. "
        "In 1973, he received a British Academy Television Award for Best Actor for his performance in War and Peace. "
        "He received two Primetime Emmy Awards for portraying Richard Hauptmann in The Lindbergh Kidnapping Case (1976) "
        "and Adolf Hitler in The Bunker (1981). In 2015, he starred in the BBC film The Dresser, and in 2018, he starred in "
        "King Lear, earning a Screen Actors Guild Award nomination.[5] In 2016 and 2018, he starred in the HBO television series Westworld, "
        "for which he received a nomination for the Primetime Emmy Award for Outstanding Lead Actor in a Drama Series."
        "Sir Philip Anthony Hopkins CBE (born 31 December 1937) is a Welsh actor, "
        "director, and producer.[2] One of Britain's most recognisable and prolific "
        "actors, he is known for his performances on the screen and stage. Hopkins has"
        " received many accolades throughout his career, including two Academy Awards, "
        "three British Academy Film Awards, a British Academy Television Award, "
        "two Primetime Emmy Awards and a Laurence Olivier Award. He has also received an honorary "
        "Golden Globe Award and the BAFTA Fellowship for lifetime achievement from the British "
        "Academy of Film and Television Arts. In 1993, he was knighted by Queen Elizabeth II for "
        "his services to the arts, and in 2003, he received a star on the Hollywood Walk of Fame "
        "for his achievements in the motion picture industry."
        "After graduating from the Royal Welsh College of Music & Drama in 1957, Hopkins trained "
        "at the Royal Academy of Dramatic Art in London. He was then spotted by Laurence Olivier who"
        "invited him to join the Royal National Theatre in 1965. Productions at the National included"
        "King Lear (his favourite Shakespeare play), Coriolanus, Macbeth, and Antony and Cleopatra. "
        "In 1985, he received great acclaim and a Laurence Olivier Award for his performance in the "
        "David Hare play Pravda. His last stage play was a West End production of M. Butterfly in 1989."
        "In 1968, Hopkins achieved recognition in film, playing Richard the Lionheart in The Lion in "
        "Winter. In the mid-1970s, he started a collaboration with Richard Attenborough who called him "
        "the greatest actor of his generation. Hopkins starred in Attenborough's A Bridge Too Far (1977), "
        "David Lynch's The Elephant Man (1980), and Jonathan Demme's The Silence of the Lambs (1991), "
        "in which he portrayed Hannibal Lecter, a role which earned him the Academy Award for Best Actor. "
        "He reprised the role in Hannibal (2001) and the prequel Red Dragon (2002). Other notable films "
        "include The Bounty (1984), 84 Charing Cross Road (1987), Howards End (1992), Bram Stoker's Dracula "
        "(1992), Shadowlands (1993), Legends of the Fall (1994), Meet Joe Black (1998), The Mask of Zorro (1998), "
        "and the Thor franchise (2011–2017), set in the Marvel Cinematic Universe. He received four more Academy "
        "Award nominations for James Ivory's The Remains of the Day (1993), Oliver Stone's Nixon (1995), "
        "Steven Spielberg's Amistad (1997) and Fernando Meirelles' The Two Popes (2019), before winning a "
        "fourth BAFTA Award and a second Academy Award for Best Actor for his portrayal of an elderly man "
        "diagnosed with dementia in The Father (2020), becoming the oldest Best Actor Oscar winner to date.[3][4]"
        "Since making his television debut with the BBC in 1967, Hopkins has continued to appear on television. "
        "In 1973, he received a British Academy Television Award for Best Actor for his performance in War and Peace. "
        "He received two Primetime Emmy Awards for portraying Richard Hauptmann in The Lindbergh Kidnapping Case (1976) "
        "and Adolf Hitler in The Bunker (1981). In 2015, he starred in the BBC film The Dresser, and in 2018, he starred in "
        "King Lear, earning a Screen Actors Guild Award nomination.[5] In 2016 and 2018, he starred in the HBO television series Westworld, "
        "for which he received a nomination for the Primetime Emmy Award for Outstanding Lead Actor in a Drama Series."
        "Sir Philip Anthony Hopkins CBE (born 31 December 1937) is a Welsh actor, "
        "director, and producer.[2] One of Britain's most recognisable and prolific "
        "actors, he is known for his performances on the screen and stage. Hopkins has"
        " received many accolades throughout his career, including two Academy Awards, "
        "three British Academy Film Awards, a British Academy Television Award, "
        "two Primetime Emmy Awards and a Laurence Olivier Award. He has also received an honorary "
        "Golden Globe Award and the BAFTA Fellowship for lifetime achievement from the British "
        "Academy of Film and Television Arts. In 1993, he was knighted by Queen Elizabeth II for "
        "his services to the arts, and in 2003, he received a star on the Hollywood Walk of Fame "
        "for his achievements in the motion picture industry."
        "After graduating from the Royal Welsh College of Music & Drama in 1957, Hopkins trained "
        "at the Royal Academy of Dramatic Art in London. He was then spotted by Laurence Olivier who"
        "invited him to join the Royal National Theatre in 1965. Productions at the National included"
        "King Lear (his favourite Shakespeare play), Coriolanus, Macbeth, and Antony and Cleopatra. "
        "In 1985, he received great acclaim and a Laurence Olivier Award for his performance in the "
        "David Hare play Pravda. His last stage play was a West End production of M. Butterfly in 1989."
        "In 1968, Hopkins achieved recognition in film, playing Richard the Lionheart in The Lion in "
        "Winter. In the mid-1970s, he started a collaboration with Richard Attenborough who called him "
        "the greatest actor of his generation. Hopkins starred in Attenborough's A Bridge Too Far (1977), "
        "David Lynch's The Elephant Man (1980), and Jonathan Demme's The Silence of the Lambs (1991), "
        "in which he portrayed Hannibal Lecter, a role which earned him the Academy Award for Best Actor. "
        "He reprised the role in Hannibal (2001) and the prequel Red Dragon (2002). Other notable films "
        "include The Bounty (1984), 84 Charing Cross Road (1987), Howards End (1992), Bram Stoker's Dracula "
        "(1992), Shadowlands (1993), Legends of the Fall (1994), Meet Joe Black (1998), The Mask of Zorro (1998), "
        "and the Thor franchise (2011–2017), set in the Marvel Cinematic Universe. He received four more Academy "
        "Award nominations for James Ivory's The Remains of the Day (1993), Oliver Stone's Nixon (1995), "
        "Steven Spielberg's Amistad (1997) and Fernando Meirelles' The Two Popes (2019), before winning a "
        "fourth BAFTA Award and a second Academy Award for Best Actor for his portrayal of an elderly man "
        "diagnosed with dementia in The Father (2020), becoming the oldest Best Actor Oscar winner to date.[3][4]"
        "Since making his television debut with the BBC in 1967, Hopkins has continued to appear on television. "
        "In 1973, he received a British Academy Television Award for Best Actor for his performance in War and Peace. "
        "He received two Primetime Emmy Awards for portraying Richard Hauptmann in The Lindbergh Kidnapping Case (1976) "
        "and Adolf Hitler in The Bunker (1981). In 2015, he starred in the BBC film The Dresser, and in 2018, he starred in "
        "King Lear, earning a Screen Actors Guild Award nomination.[5] In 2016 and 2018, he starred in the HBO television series Westworld, "
        "for which he received a nomination for the Primetime Emmy Award for Outstanding Lead Actor in a Drama Series."
        "Sir Philip Anthony Hopkins CBE (born 31 December 1937) is a Welsh actor, "
        "director, and producer.[2] One of Britain's most recognisable and prolific "
        "actors, he is known for his performances on the screen and stage. Hopkins has"
        " received many accolades throughout his career, including two Academy Awards, "
        "three British Academy Film Awards, a British Academy Television Award, "
        "two Primetime Emmy Awards and a Laurence Olivier Award. He has also received an honorary "
        "Golden Globe Award and the BAFTA Fellowship for lifetime achievement from the British "
        "Academy of Film and Television Arts. In 1993, he was knighted by Queen Elizabeth II for "
        "his services to the arts, and in 2003, he received a star on the Hollywood Walk of Fame "
        "for his achievements in the motion picture industry."
        "After graduating from the Royal Welsh College of Music & Drama in 1957, Hopkins trained "
        "at the Royal Academy of Dramatic Art in London. He was then spotted by Laurence Olivier who"
        "invited him to join the Royal National Theatre in 1965. Productions at the National included"
        "King Lear (his favourite Shakespeare play), Coriolanus, Macbeth, and Antony and Cleopatra. "
        "In 1985, he received great acclaim and a Laurence Olivier Award for his performance in the "
        "David Hare play Pravda. His last stage play was a West End production of M. Butterfly in 1989."
        "In 1968, Hopkins achieved recognition in film, playing Richard the Lionheart in The Lion in "
        "Winter. In the mid-1970s, he started a collaboration with Richard Attenborough who called him "
        "the greatest actor of his generation. Hopkins starred in Attenborough's A Bridge Too Far (1977), "
        "David Lynch's The Elephant Man (1980), and Jonathan Demme's The Silence of the Lambs (1991), "
        "in which he portrayed Hannibal Lecter, a role which earned him the Academy Award for Best Actor. "
        "He reprised the role in Hannibal (2001) and the prequel Red Dragon (2002). Other notable films "
        "include The Bounty (1984), 84 Charing Cross Road (1987), Howards End (1992), Bram Stoker's Dracula "
        "(1992), Shadowlands (1993), Legends of the Fall (1994), Meet Joe Black (1998), The Mask of Zorro (1998), "
        "and the Thor franchise (2011–2017), set in the Marvel Cinematic Universe. He received four more Academy "
        "Award nominations for James Ivory's The Remains of the Day (1993), Oliver Stone's Nixon (1995), "
        "Steven Spielberg's Amistad (1997) and Fernando Meirelles' The Two Popes (2019), before winning a "
        "fourth BAFTA Award and a second Academy Award for Best Actor for his portrayal of an elderly man "
        "diagnosed with dementia in The Father (2020), becoming the oldest Best Actor Oscar winner to date.[3][4]"
        "Since making his television debut with the BBC in 1967, Hopkins has continued to appear on television. "
        "In 1973, he received a British Academy Television Award for Best Actor for his performance in War and Peace. "
        "He received two Primetime Emmy Awards for portraying Richard Hauptmann in The Lindbergh Kidnapping Case (1976) "
        "and Adolf Hitler in The Bunker (1981). In 2015, he starred in the BBC film The Dresser, and in 2018, he starred in "
        "King Lear, earning a Screen Actors Guild Award nomination.[5] In 2016 and 2018, he starred in the HBO television series Westworld, "
        "for which he received a nomination for the Primetime Emmy Award for Outstanding Lead Actor in a Drama Series."
        "Sir Philip Anthony Hopkins CBE (born 31 December 1937) is a Welsh actor, "
        "director, and producer.[2] One of Britain's most recognisable and prolific "
        "actors, he is known for his performances on the screen and stage. Hopkins has"
        " received many accolades throughout his career, including two Academy Awards, "
        "three British Academy Film Awards, a British Academy Television Award, "
        "two Primetime Emmy Awards and a Laurence Olivier Award. He has also received an honorary "
        "Golden Globe Award and the BAFTA Fellowship for lifetime achievement from the British "
        "Academy of Film and Television Arts. In 1993, he was knighted by Queen Elizabeth II for "
        "his services to the arts, and in 2003, he received a star on the Hollywood Walk of Fame "
        "for his achievements in the motion picture industry."
        "After graduating from the Royal Welsh College of Music & Drama in 1957, Hopkins trained "
        "at the Royal Academy of Dramatic Art in London. He was then spotted by Laurence Olivier who"
        "invited him to join the Royal National Theatre in 1965. Productions at the National included"
        "King Lear (his favourite Shakespeare play), Coriolanus, Macbeth, and Antony and Cleopatra. "
        "In 1985, he received great acclaim and a Laurence Olivier Award for his performance in the "
        "David Hare play Pravda. His last stage play was a West End production of M. Butterfly in 1989."
        "In 1968, Hopkins achieved recognition in film, playing Richard the Lionheart in The Lion in "
        "Winter. In the mid-1970s, he started a collaboration with Richard Attenborough who called him "
        "the greatest actor of his generation. Hopkins starred in Attenborough's A Bridge Too Far (1977), "
        "David Lynch's The Elephant Man (1980), and Jonathan Demme's The Silence of the Lambs (1991), "
        "in which he portrayed Hannibal Lecter, a role which earned him the Academy Award for Best Actor. "
        "He reprised the role in Hannibal (2001) and the prequel Red Dragon (2002). Other notable films "
        "include The Bounty (1984), 84 Charing Cross Road (1987), Howards End (1992), Bram Stoker's Dracula "
        "(1992), Shadowlands (1993), Legends of the Fall (1994), Meet Joe Black (1998), The Mask of Zorro (1998), "
        "and the Thor franchise (2011–2017), set in the Marvel Cinematic Universe. He received four more Academy "
        "Award nominations for James Ivory's The Remains of the Day (1993), Oliver Stone's Nixon (1995), "
        "Steven Spielberg's Amistad (1997) and Fernando Meirelles' The Two Popes (2019), before winning a "
        "fourth BAFTA Award and a second Academy Award for Best Actor for his portrayal of an elderly man "
        "diagnosed with dementia in The Father (2020), becoming the oldest Best Actor Oscar winner to date.[3][4]"
        "Since making his television debut with the BBC in 1967, Hopkins has continued to appear on television. "
        "In 1973, he received a British Academy Television Award for Best Actor for his performance in War and Peace. "
        "He received two Primetime Emmy Awards for portraying Richard Hauptmann in The Lindbergh Kidnapping Case (1976) "
        "and Adolf Hitler in The Bunker (1981). In 2015, he starred in the BBC film The Dresser, and in 2018, he starred in "
        "King Lear, earning a Screen Actors Guild Award nomination.[5] In 2016 and 2018, he starred in the HBO television series Westworld, "
        "for which he received a nomination for the Primetime Emmy Award for Outstanding Lead Actor in a Drama Series."
    ;

    {
        ffGenericWriter writer;
        writer.write("test1.txt", text.c_str(), text.size(), LZ4Compression);
    }
    {
        ffGenericReader reader;
        ffGenericHeader header = reader.view("test1.txt");
        std::cout << "File: test1.txt" << std::endl;
        std::cout << header << std::endl;

        if (reader.compatible())
        {
            std::cout << "Data:" << std::endl;
            std::cout << reader.read() << std::endl;
        }
    }
    return 0;
}
