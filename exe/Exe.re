open Aoc;

CLI.(
  program("aoc")
  |> version("1.0.0")
  |> description("Run aoc")
  |> argument("year", "The year, 2015-2020", Int)
  |> argument("day", "The day, 1-25", Int)
  |> action(({log, args}) => {
       let year = args.int("year");
       let minYear = 2015;
       let maxYear = 2020;
       if (year < minYear || year > maxYear) {
         let errorStr =
           "Invalid year, range is "
           ++ string_of_int(minYear)
           ++ "-"
           ++ string_of_int(maxYear)
           ++ ", received: "
           ++ string_of_int(year);
         log.error(errorStr);
         exit(1);
       };

       let day = args.int("day");
       let minDay = 1;
       let maxDay = 25;
       if (day < minDay || day > maxDay) {
         let errorStr =
           "Invalid day, range is "
           ++ string_of_int(minDay)
           ++ "-"
           ++ string_of_int(maxDay)
           ++ ", received: "
           ++ string_of_int(day);
         log.error(errorStr);
         exit(1);
       };

       let header =
         "~~~ Advent of Code "
         ++ string_of_int(year)
         ++ ", Day "
         ++ string_of_int(day)
         ++ " ~~~";
       log.info(header);

       let unimplemented = () => {
         log.warn("This is unimplemented.");
       };

       switch (year) {
       | 2015 => unimplemented()
       | 2016 => unimplemented()
       | 2017 => unimplemented()
       | 2018 => unimplemented()
       | 2019 => unimplemented()
       | 2020 =>
         switch (day) {
         | 1 => unimplemented()
         | 2 => unimplemented()
         | 3 => unimplemented()
         | 4 => unimplemented()
         | 5 => unimplemented()
         | 6 => unimplemented()
         | 7 => unimplemented()
         | 8 => unimplemented()
         | 9 => unimplemented()
         | 10 => unimplemented()
         | 11 => unimplemented()
         | 12 => unimplemented()
         | 13 => unimplemented()
         | 14 => unimplemented()
         | 15 => unimplemented()
         | 16 => unimplemented()
         | 17 => unimplemented()
         | 18 => unimplemented()
         | 19 => unimplemented()
         | 20 => unimplemented()
         | 21 => unimplemented()
         | 22 => unimplemented()
         | 23 => unimplemented()
         | 24 => unimplemented()
         | 25 => unimplemented()
         | _ => failwith("This should be unreachable...")
         }
       | _ => failwith("This should be unreachable...")
       };

       let footer =
         "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ++ (day >= 10 ? "~" : "");

       log.info(footer);
     })
  |> parseAndRun(Sys.argv)
);
